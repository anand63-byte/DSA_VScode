#include<iostream>
using namespace std;
int main(){
    int noz=0;
    int non=0;
    int now=0;
    int arr[]={2,0,2,1,2,1,2,2,1,0,0,1,2,0,1,0};
    for(int i=0;i<16;i++){
        if(arr[i]==0) noz++;
       else if(arr[i]==1) non++;
       else if(arr[i]==2) now++;
    }
   //me

    // for(int i=0;i<noz;i++) cout<<0<<" ";
    // for(int i=0;i<non;i++) cout<<1<<" ";
    // for(int i=0;i<now;i++) cout<<2<<" ";
//sir


for(int i=0;i<16;i++){
if(i<noz) cout<<0;
else if(i<(noz+non)) cout<<1;
else cout<<2;
}
    //three pointers 

    // int i=0,j=15,k=7;
    // while(i<=j){
    //     if(arr[i]==0) i++;
    //     else if(arr[j]==2) j--;
    //     else if(arr[k]==1) k--;
    //     else if(arr[i]==2 && arr[j]==0) swap(arr[i],arr[j]);
    //     else if(arr[i]==1 && arr[k]==0) swap(arr[i],arr[k]);
    //     else if(arr[k]==2 && arr[j]==1) swap(arr[k],arr[j]);
    // }
    // for(int i=0;i<16;i++) cout<<arr[i];
}