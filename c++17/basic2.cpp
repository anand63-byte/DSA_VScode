#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(15);
    st.push(25);
    st.push(35);
    st.push(45);
    cout<<"now in the order"<<"->"<<endl;
stack<int> temp;
    while(st.size()!=0){
        temp.push(st.top());
        st.pop();
    }
        while(temp.size()!=0){
        cout<<temp.top()<<endl;
        int x=temp.top();
        st.push(x);
        temp.pop();
    }
    cout<<"old order was"<<"->"<<endl;
        while(st.size()!=0){
        cout<<st.top()<<endl;
        st.pop();
    }
}