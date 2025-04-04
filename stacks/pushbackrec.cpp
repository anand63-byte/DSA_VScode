#include<iostream>
#include<stack>
using namespace std;
void PushbackRec(stack<int> &st,int value){
    if(st.size()==0){
        st.push(value);
        return;
    }
    int x=st.top();
    st.pop();
    PushbackRec(st,value);
    st.push(x);
}
void display(stack<int> &st){
    stack<int> temp;
while(st.size()>0){
    int x=st.top();
    temp.push(x);
    st.pop();
}
while(temp.size()>0){
    cout<<temp.top()<<endl;
    st.push(temp.top());
    temp.pop();
}
}

int main(){
    stack<int> st;
    cout<<st.size()<<" ";
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int value=-10;
    display(st);
    cout<<endl<<endl;
    PushbackRec(st,value);
    display(st);
}