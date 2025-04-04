#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] = {5,3,9,4,7,2};
    int n = 6;
    int x = 0;
    int y = 0;
    vector<int> v;
    for(int i=0;i<n;i++) v.push_back(arr[i]);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++) mp[v[i]] = i;
    for(int i=0;i<n/2;i++) x += mp[arr[i]];
    for(int i=n/2;i<n;i++) y += mp[arr[i]];
    int a = x-y;
    if(a<0) a*=-1;
    cout<<a;
}