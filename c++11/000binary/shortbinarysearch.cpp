#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,7,8,19,23,25,27};
    int target=70;
    int lo=0;
    int hi=7;
    while(lo<=hi){bool flag=false;
    int mid=(lo+hi)/2;
    if(arr[mid]==target){
    cout<<mid;
    flag=true;
    break;
    }
    
    else if(arr[mid]>target) hi=mid-1;
    else lo=mid+1;
     if(flag=false) 
     cout<<"number doesn't found";
     break;
    }
}     