#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n = 7;
    int ans[n];
    ans[0]=1;
    for(int i=1;i<n;i++){
        int j=i-1;
        while(j>=0){
            if(arr[i]<arr[j]){
                ans[i]=i-j;
                break;
            }
            j--;
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i];
}