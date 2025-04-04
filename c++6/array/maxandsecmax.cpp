#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int n;
cout<<"enter the size of array: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
int max=INT_MIN;
int smax;

for(int i=0;i<n;i++){
    if(max<arr[i]){
        smax=max;
        max=arr[i];   //but if last value is sec max then this will not work
    }
    else if(smax<arr[i]){
        smax=arr[i];
    }
}
cout<<"the max val is: "<<max<<endl;
cout<<"the sec max val is: "<<smax;
// cout<<endl;
// int smax=INT_MIN;
// for(int i=0;i<n;i++){
//     if(smax<arr[i] && arr[i]!=max){
//         smax=arr[i];
//     }
// }
// cout<<"the sec max val is: "<<smax;
}