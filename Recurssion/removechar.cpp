#include<iostream>
#include<string>
using namespace std;
void subset(string ans,string s,int idx){
if(idx==s.length()) {
    cout<<ans;
    return;
}
if(s[idx]=='a')subset(ans,s,idx+1);
else {
    //ans=ans+s[idx];
    subset(ans+s[idx],s,idx+1);
     }
}
int main(){
    string s="anandmishra";
    subset("", s,0);
}