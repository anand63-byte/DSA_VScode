#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n=8;
    int ans[n];
    ans[0]=-1;
    for(int i=1;i<n;i++){
        int j=i-1;
        ans[i]=-1;
        while(j>=0){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
            j--;
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<endl;
}