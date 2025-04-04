#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string a = "loveleetcode";
       a = a.substr(2);
      cout<<a;
    // unordered_map<char,int>mp;
    //  vector<char>v;
    // for(auto x : a){
    //     mp[x]++;
    // }
    // for(auto x : mp){
    //     v.push_back(x.first);
    // }
    // for(int i=0;i<a.size();i++){
    //     for(int j=0;j<a.size()-i-1;j++){
    //         int a = mp[j];
    //         int b = mp[j+1];
    //         if(mp[v[j]] < mp[v[j+1]]){
    //             swap(v[j],v[j+1]);
    //         }
    //     }
    // }
    // string ans = "";
    // for(auto x : v){
    //  ans += string(mp[x],x);
    // }
    // cout<<ans;
}
