#include<iostream>
#include<vector>
using namespace std;
    void print(vector<int> arr,vector<int> ans,vector<vector<int>> mainans,int idx,int n){
        if(idx>n-1){
           
            mainans.push_back(ans);
            if(ans.size()==1){
                int r=mainans.size();
                int c=mainans[0].size();
                for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                    cout<<mainans[i][j]<<" ";
                    }
                    cout<<endl;
                 }
                 return;
            }
           else print(ans,{},mainans,0,5);
         }
        int a=arr[idx]+arr[idx+1];
        ans.push_back(a);
        print(arr,ans,mainans,idx+1,n);
        return ;
    }
int main(){
    vector<int> arr={5, 4, 3, 2, 1};
    vector<vector<int>> mainans;
    print(arr,{},mainans,0,5);

}