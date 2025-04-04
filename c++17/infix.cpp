#include<iostream>
#include<stack>
using namespace std;
int solve(int a,int b,char c){
    if(c=='+') return a+b;
    if(c=='-') return a-b;
    if(c=='*') return a*b;
    if(c=='/') return a/b;
}
int pri(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
}
int main(){
    string str = "2+6*4/8-3";
    stack<char>op;
    stack<int>val;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        int a = (int)ch - 48;
        if(a>=0 && a<=9) val.push(str[i]);
        else{
            if(op.size()==0 || pri(op.top())<pri(str[i])) 
            op.push(str[i]);
        else{
            while(pri(op.top())>=pri(str[i]) && op.size()>0 ){
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                char c = op.top();
                op.pop();
                int ans = solve(val1,val2,c);
                val.push(ans);
            }
            op.push(str[i]);
        }
        }
    }
    while(op.size()>0){
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                char c = op.top();
                op.pop();
                int ans = solve(val1,val2,c);
                val.push(ans);
            }
            cout<<val.top();
}