#include<iostream>
#include<vector>
using namespace std;
void rec(int n,vector<int>& v,int k,int idx,vector<int>& ans){
   
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> v(n);
    vector<int> ans;
    for(int i=1;i<=n;i++) v[i-1] = i;
    //for(int i=0;i<n;i++) cout<<v[i]<<" ";
    rec(n,v,k,0,ans);
}