#include<iostream>
#include<string>
using namespace std;
  void rec(string a,string ans){
    if(a.size()==0){
      cout<<ans<<" ";
      cout<<endl;
      return ;
    }
    for(int i=0;i<a.size();i++){
    string left= a.substr(0,i);
    string right= a.substr(i+1);
    rec(left+right,ans+a[i]);
    }
    return;
  }
int main(){
    string a="abc";
    string ans="";
    rec(a,ans);

  
}