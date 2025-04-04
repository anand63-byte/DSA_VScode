#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
 int li=0,hi=12;
 while(li<=hi){
    int mid=li+(hi-li)/2;
    if(arr[mid]==1){
        if(arr[mid]==arr[mid-1]) hi=mid-1;
        else {
        cout<<n-mid;
        break;
    }
    }
    else li=mid+1;
 }
    }