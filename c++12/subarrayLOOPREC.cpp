#include<iostream>
#include<vector>
using namespace std;
 void recloop(int arr[],int idx,int n,vector<int>& ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        ans.clear();
        cout<<endl;
        return ;
    }
    //ans.push_back(arr[idx]);
    //cout<<ans[idx]<<" ";
    for(int i=idx;i<n;i++){
        cout<<" hi ";
        ans.push_back(arr[i]);
       recloop(arr,i,n,ans);
       cout<<endl;
    }

 }
int main(){
    int arr[]={1,2,3,4};
    vector<int> ans;
    int n=sizeof(arr)/sizeof(arr[0]);
    recloop(arr,0,n,ans);
}