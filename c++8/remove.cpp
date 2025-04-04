#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="aaabbcdddaacbbeef";
    int n=s.size();
    sort(s.begin(),s.end());
    string ans="";
    for(int i=0;i<n;i++){
        char ch=s[i];
        if(ans.size()==0) ans+=ch;
        else if(ans[ans.size()-1]!=ch) ans+=ch;
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i];
}