#include<iostream>
#include<vector>
using namespace std;
void rec(int arr[],int idx,vector<int> &ans,int n){
    if(idx==n) {
        for(int i=0;i<ans.size();i++) cout<<ans[i];
        cout<<endl;
        return ;
    }
    for(int i=idx;i<n;i++){
        ans.push_back(arr[i]);
        rec(arr,i+1,ans,n);
        ans.pop_back();
    }
    return ;
}
int main(){
    int arr[]={1,2,3,4};
    int n=4;
    vector<int> ans;

   rec(arr,0,ans,n);
}