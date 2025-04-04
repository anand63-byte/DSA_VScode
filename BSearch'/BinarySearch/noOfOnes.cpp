#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,0,0};
    int n=5;
    int naksha=-1;
    int idx=-1;
    int lo=0,hi=4;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==1){
            if(arr[mid-1]==1) hi=mid-1;
            else {
                idx=mid;
                naksha++;
                break;
            }
        }
        else if(arr[mid]<1) lo=mid+1;
        else hi=mid-1;
    }
   if(naksha!=-1) cout<<n-mid;
    
}