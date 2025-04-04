#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],vector<vector<int>>mainans,vector<int> ans,int idx,int size){
    if(idx==size){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        mainans.push_back(ans);
           return ;
    }
    print(arr,mainans,ans,idx+1,size);
    if(ans.size()==0){
        ans.push_back(arr[idx]);
        print(arr,mainans,ans,idx+1,size);
     }
     else if(ans[ans.size()-1]==arr[idx-1]){
             ans.push_back(arr[idx]);
            print(arr,mainans,ans,idx+1,size);
     }
    return ;
}
int main(){
    int arr[]={1,2,3,4};
    int n=4;
    vector<int> ans;
    vector<vector<int>> mainans;
    print(arr,mainans,ans,0,n);
    int r=mainans.size();
    int c=mainans[0].size();
}