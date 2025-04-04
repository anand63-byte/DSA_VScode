#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,4,5,6,8,9,10,12,13,14,15,17,20};
 int li=0,hi=14;
 int ans;
 while(li<=hi){

    int mid=li+(hi-li)/2;
   if(arr[mid]==mid) li=mid+1;
   else{
    ans=mid;
   hi=mid-1;
   }
   }
   cout<<ans;
 
    }
