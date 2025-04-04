#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,6,8,8};
    int target=5;
    int lo=0;
    int hi=6;
     int k=5;
     int x=k/2;
    while(lo<=hi){
    int mid=(lo+hi)/2;
    if(arr[mid]==target){
    while(x>=0){
        cout<<arr[mid-x]<<" ";
        if(x==0) break;
        x--;
    }
    x=k/2;
    while(x>0){
        cout<<arr[mid+x]<<" ";
        x--;
    }
    break;
    }
    
    else if(arr[mid]>target) hi=mid-1;
    else lo=mid+1;
    }
}     