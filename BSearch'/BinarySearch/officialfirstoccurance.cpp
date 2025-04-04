#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,3,4,4,4,5,5,6,9,98};
 int li=0,hi=12;
 while(li<=hi){
    int mid=li+(hi-li)/2;
    if(arr[mid]==4){
        if(arr[mid]==arr[mid-1]) hi=mid-1;
        else {
        cout<<mid;
        break;
    }
    }
    else if(arr[mid]>4) hi=mid-1;
    else li=mid+1;
 }
    }