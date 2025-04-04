#include<iostream>
#include<vector>
using namespace std;
void rec(int n,int v[],int idx,vector<int> ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
        //ans.pop_back();
        return ;
    }
     rec(n,v,idx+1,ans);
     ans.push_back(v[idx]);
     rec(n,v,idx+1,ans);
    //ans.pop_back();
}
int main(){
    int n = 4;
    int v[] = {1,2,3,4};
    vector<int> ans;
    for(int i=1;i<=n;i++) v[i-1] = i;
    rec(n,v,0,ans);
}