#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    void print (string s,string ans,int idx){
        if(idx==s.size()){
            for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
            return;
          }
        if(idx==0){
            for(int i=0;i<s.size();i++){
                print(s.substr(1),ans+s[idx],idx+1);
            }
        }
         else{
             for(int i=0;i<s.size();i++){
            string a="";
            a+=s.substr(idx-1,idx);
            a+=s.substr(idx);
            print(a,ans+s[idx],idx+1);
          }
         }
    }
int main(){
    string s="abc";
     string ans="";
    int n=s.size();
    print(s,ans,0);
    // char ch = 'z';
    // string ans="anand";
    // ans+="Mishra";
    // int a = (int)ch;
    // a-=32;
    // char b=(char)a;
    // ans+=b;
    // cout<<ans;
}