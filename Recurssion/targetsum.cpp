#include<iostream>
#include<vector>
using namespace std;
   void rec(int arr[],vector<int>& v,int idx,int n,int target){
        if(target==0){;
            for(int i=0;i<n;i++) cout<<v[i];
            cout<<endl;
             return ;
        }
        if(target<0) return ;
        for(int i=idx;i<n;i++){
             v.push_back(arr[i]);
            rec(arr,v,i,n,target-arr[i]);
            v.pop_back();
        }
        return ;
   }
int main(){
    int arr[]={2,3,5};
    int n=3;
    int target=8;
    vector<int> v;
    rec(arr,v,0,n,target);
}