#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    void print (string s,string ans,int idx, bool flag){
        if(idx==s.size()){
            for(int i=0;i<ans.size();i++) cout<<ans[i];
            cout<<endl;
            return;
        }
        char ch=s[idx];
        if(ans.size()==1){
            if(flag==true) print(s,ans+ch,idx+1,1);
            print(s,ans,idx+1,1);
            return ;
        }
        char dh=s[idx+1];
        if(ch==dh){
            if(flag == true) print(s,ans+ch,idx+1,1);
            print(s,ans,idx+1,0);
        }
        else{
           if(flag == true) print(s,ans+ch,idx+1,1);
            print(s,ans,idx+1,1);
        }
       return; 
    }
int main(){
    string s="221";
    sort(s.begin(),s.end());
    string ans="";
    print(s,ans,0,1);
}