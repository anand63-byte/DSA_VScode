#include<iostream>
using namespace std;
int main(){
    //prod of itself
    int arr[]={1,2,3,4};
    int brr[4];
    int crr[4];
    brr[0]=1;
    // int prod=arr[0];
    //     for(int i=1;i<4;i++){
    //         prod*=arr[i-1];
    //         brr[i]=prod;
    //     }
    //     prod=arr[4-1];
    //      arr[4-1]=1;
    //     for(int i=2;i>=0;i--){
    //         prod*=arr[i+1];
    //         brr[i]*=prod;

    //     }
    //             for(int i=0;i<4;i++){
    //     cout<<brr[i]<<" ";
    //     }


       for(int i=1;i<4;i++){
        brr[i]=brr[i-1]*arr[i-1];
       }
       crr[3]=1;
       for(int i=2;i>=0;i--){
        crr[i]=crr[i+1]* arr[i+1];
       }
        for(int i=1;i<4;i++){
        brr[i]*=crr[i];
       }
        for(int i=0;i<4;i++){
         cout<<brr[i]<<" ";
       }
    
}