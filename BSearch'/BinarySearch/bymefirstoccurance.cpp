#include<iostream>
using namespace std;
int m(int x=7,int y=9){
    return x+y;
}
void n(){
    cout<<"anand";
}
int main(){
//     int arr[]={1,2,2,2,3,3,3,3,4,4,5,8,9};
//     int target=3;
//     int li=0,hi=12;
//     int mid=(li+hi)/2;
//     while(li<=hi){
//         if(arr[mid]==target) hi=mid;
//         else if(arr[mid<target]) li=mid+1;
//         else hi =mid-1;
//         }
// cout<<arr[hi];

int ans=m();
cout<<ans;
n();
}