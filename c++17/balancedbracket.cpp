#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    return false;
}
int main(){
    string s ="()()(())";
    cout<<isBalanced(s);
}