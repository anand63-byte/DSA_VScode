#include<bits/stdc++.h>
using namespace std;
int main(){
    string txt = "kkkkkkkk";
    string pat = "kkkkk";
    int count = 0;
        unordered_map<char,int>mp;
        for(auto x : pat) mp[x] ++;

    int i = 0 , j = 0;

         while( j < txt.size()){
             mp[txt[j]] -- ;
             j ++;
             
             if(j - i  == pat.length()){
                 bool flag = true;
                for(auto  x : mp) if(x.second > 0) flag = false;
                if(flag == true) count ++;
                
                mp[txt[i]] ++;
                i ++;
             }
             
             
         }
    
    
    cout<<count;
}