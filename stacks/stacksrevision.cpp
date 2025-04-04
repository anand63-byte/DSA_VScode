#include<iostream>
#include<stack>
using namespace std;
void displayRec(stack<int> st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<st.top()<<endl;
    st.pop();
    displayRec(st);
    st.push(x);
}
void displayRealRec(stack<int> &st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    displayRealRec(st);
    cout<<x<<endl;
    st.push(x);   
}
int main(){
    stack<int> st;
    st.push(15);
    st.push(25);
    st.push(35);
    st.push(45);
    displayRec(st);
    cout<<endl<<endl;
   //displayRealRec(st);
}