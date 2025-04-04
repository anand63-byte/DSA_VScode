#include<iostream>
#include<stack>
using namespace std;
 void pushatindexRec(stack<int> &st,int ind,int val){
      if(st.size()==ind) st.push(val);
      int x=st.top();
      st.pop();
      pushatindexRec(st,2,90);
      st.push(x);
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
  pushatindexRec(st,2,90);
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
