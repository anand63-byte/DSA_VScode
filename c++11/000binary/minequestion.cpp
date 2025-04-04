#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,9,10};
    int lo=0;
    int hi=8;
   
int mid=(lo+hi)/2;
while(lo<=hi){
     if(arr[mid] != mid+1 && arr[mid] == mid+2){
        cout<<mid;
        break;
     }
     else if(arr[mid] >= mid+1) hi = mid-1;
     else lo = mid+1;
     }

    
    
}