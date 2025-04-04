import fastapi
import uvicorn
from fastapi import FastAPI, UploadFile, File
from pydantic import BaseModel
import openai  # Using OpenAI GPT-3.5 or any pre-trained model
import pymongo
from pymongo import MongoClient
import json
import streamlit as st

# Initialize FastAPI app
app = FastAPI()

# MongoDB Connection Setup
try:
    client = MongoClient("mongodb://localhost:27017/")
    db = client["InterviewPrepDB"]
    collection = db["questions"]
except Exception as e:
    print("Error connecting to MongoDB:", e)

# OpenAI API Key (Ensure the key is provided via environment variable or config file)
import os
OPENAI_API_KEY = os.getenv("OPENAI_API_KEY")
if not OPENAI_API_KEY:
    raise ValueError("OpenAI API key is missing. Set it as an environment variable.")
openai.api_key = OPENAI_API_KEY

class QuestionInput(BaseModel):
    question: str

@app.post("/ask")
def ask_question(question_input: QuestionInput):
    """Processes user question and generates AI response."""
    try:
        response = openai.ChatCompletion.create(
            model="gpt-3.5-turbo",
            messages=[{"role": "user", "content": question_input.question}]
        )
        answer = response['choices'][0]['message']['content']
        
        # Store the question & answer in MongoDB
        collection.insert_one({"question": question_input.question, "answer": answer})
        
        return {"question": question_input.question, "answer": answer}
    except Exception as e:
        return {"error": str(e)}

@app.get("/history")
def get_history():
    """Fetches stored Q&A from MongoDB."""
    try:
        history = list(collection.find({}, {"_id": 0}))
        return {"history": history}
    except Exception as e:
        return {"error": str(e)}

if __name__ == "__main__":
    uvicorn.run(app, host="0.0.0.0", port=8000)

# Streamlit UI for User Interaction
def main():
    st.title("AI-Powered Interview Preparation Portal")
    st.write("Ask AI any technical interview question!")
    
    question = st.text_input("Enter your question:")
    if st.button("Ask AI"):
        if question:
            response = ask_question(QuestionInput(question=question))
            if isinstance(response, dict) and "error" in response:
                st.error("Error: " + response["error"])
            else:
                st.write("### Answer:")
                st.write(response.get("answer", "No answer provided"))
    
    if st.button("Show History"):
        history = get_history()
        if isinstance(history, dict) and "error" in history:
            st.error("Error: " + history["error"])
        else:
            st.write("### Past Questions & Answers:")
            for qa in history.get("history", []):
                st.write(f"**Q:** {qa.get('question', 'N/A')}")
                st.write(f"**A:** {qa.get('answer', 'N/A')}")

if __name__ == "__main__":
    main()
