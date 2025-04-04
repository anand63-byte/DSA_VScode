#include<iostream>
#include<string>
using namespace std;
void skip(string ans,string s){
if(s.length()==0) {
    cout<<ans;
    return;
}
char ch=s[0];
if(ch=='a')skip(ans,s.substr(1));
else skip(ans+ch,s.substr(1));
}
int main(){
    string s="anandmishra";
    skip("", s);
}