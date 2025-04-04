#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string arr[]={"anand","aryan","smith","shubh"};
    unordered_map<string,int> mp;
    int brr[]={3,4,53,5};
    for(int i=0;i<4;i++){
        mp[arr[i]] = brr[i];
        //agar yaha direct pairing nahi karoge to 4 lines likhna padega!
    }
    for(auto x: mp){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    }