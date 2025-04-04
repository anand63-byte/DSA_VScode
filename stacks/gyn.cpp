#include<iostream>
#include<stack>
using namespace std;
int main(){
 
  char ch='a';
  cout<<(int)ch;

}

 void pushatindex(stack<int> &st,int ind,int val){
    stack<int> temp;
        while(st.size()>ind){
          temp.push(st.top());
          st.pop();
        }
        st.push(val);
        while(temp.size()>0){
        st.push(temp.top());
          temp.pop();
        }
    }
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
        while(temp.size()>0){
            cout<<temp.top()<<endl;
        st.push(temp.top());
          temp.pop();
        }
       cout<<endl<<endl;
  pushatindex(st,2,90);
      while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
        while(temp.size()>0){
            cout<<temp.top()<<endl;
        st.push(temp.top());
          temp.pop();
        }
    
}
