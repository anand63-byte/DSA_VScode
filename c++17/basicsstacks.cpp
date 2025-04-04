#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<" "<<endl;
    st.push(15);
    st.push(25);
    st.push(35);
    st.push(45);
    cout<<st.size()<<" "<<endl;
    // while(st.size()!=0){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }


// in real order;
cout<<"now in the order"<<endl;
cout<<st.size()<<endl;
stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
        while(temp.size()>0){
        cout<<temp.top()<<endl;
        temp.pop();
    }
}
