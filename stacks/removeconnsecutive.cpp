#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
    string s ="aaabbcddaabffg";
    int n=s.size();
    stack<char> st;
    for(int i=0;i<n;i++){
        if(st.size()==0) st.push(s[i]);
        char ch=s[i];
        if(ch!=st.top()) st.push(s[i]);
    }
    string ans="";
    for(int i=0;st.size()>0;i++){
        ans+=st.top();
        st.pop();
    }
   reverse(ans.begin(),ans.end());
   for(int i=0;i<ans.size();i++) cout<<ans[i];

}