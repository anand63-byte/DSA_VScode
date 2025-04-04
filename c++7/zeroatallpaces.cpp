#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main(){
    int arr[][4]={1,2,-3,4,5,0,-4,2,1,-1,2,3,-4,-5,-7,8};
    int brr[4][4];
    int sum=0;
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        if(arr[i][j]==0)
            brr[i][j]=1;
        else brr[i][j]=0;
     }
     }
       for(int i=0;i<4;i++)
   {
    for(int j=0;j<4;j++){
        cout<<brr[i][j]<<" ";
    }
cout<<endl;
   }
}