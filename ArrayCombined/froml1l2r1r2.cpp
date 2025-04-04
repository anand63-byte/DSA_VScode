#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[][4]={1,2,-3,4,0,0,-4,2,1,-1,2,3,-4,-5,-7,0};
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    
    //sum
    int sum=0;
     for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
        sum=sum+arr[i][j];
      
     }
     }
     cout<<sum;

}