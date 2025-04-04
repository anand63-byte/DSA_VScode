#include<iostream>
#include<vector>
using namespace std;
 void rec(string & s,int n,vector<string> v){
     if(s.size()==n){
        cout<<s<<endl;
        s.clear();
        return ;
     }
    if(s.size()==0){
       s=s+"0";
       rec(s,n,v);
       s=s+"1";
       rec(s,n,v);
    }
    else{
        if(s[s.size()-1]!='1') {
            s=s+"0";
           rec(s,n,v);
           s=s+"1";
           rec(s,n,v);
        }
        else {s=s+"0";
         rec(s,n,v);
        }
    }
 }
int main(){
    string s="";
    int n=4;
    vector<string> v;
    rec(s,n,v);
}
