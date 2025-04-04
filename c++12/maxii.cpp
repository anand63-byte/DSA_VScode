#include<iostream>
#include<limits.h>
using namespace std;
int maximum(int arr[],int idx,int n){
    if(idx==n) return INT_MIN;
     return max(arr[idx],maximum(arr,idx+1,n));
}

int minimum(int arr[],int idx,int n){
    if(idx==n) return INT_MAX;
     return min(arr[idx],minimum(arr,idx+1,n));
}
int main(){
    int arr[]={9,7,88,4,48};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maximum(arr,0,n);
    cout<<endl;
    cout<<minimum(arr,0,n);
    
}