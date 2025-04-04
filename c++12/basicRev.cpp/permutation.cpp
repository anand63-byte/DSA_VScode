#include<iostream>
using namespace std;
 void rec(string s,string helper){
      if(s.size() == 0){
            cout<<helper;
            cout<<endl;
            return ;
        }
      for(int i=0;i<s.size();i++){
        string left = s.substr(0,i);
        string right= s.substr(i+1,s.size());
        rec(left+right,helper+s[i]);
      }
 }
int main(){
    string s = "abc";
    rec(s,"");
}