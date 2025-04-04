#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,3,3,4,4,4,4,5,5,6};
    int n=16;
    int x=3;
    int lo=0,hi=15;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]==x) hi=mid-1;
            else {
                cout<<mid;
                break;
            }
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
}