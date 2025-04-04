#include<iostream>
#include<limits.h>
using namespace std;
int maximum(int arr[],int idx,int n){
    if(idx==n) return arr[idx];
 return max(arr[idx],maximum(arr,idx+1,n));
}
int main(){
    int arr[]={3,2,5,1,9,7,88,4,48,2,3,4,5,4,3,54,7,8,9,0,7,9,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maximum(arr,0,n);
} 