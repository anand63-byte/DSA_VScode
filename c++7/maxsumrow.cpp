#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[][4]={1,3,5,7,3,4,7,8,1,4,12,3};
    int max=INT_MIN;
    int idx=-1;
     for(int i=1;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++){
        sum=sum+arr[i][j];
       if(max<sum){
        max=sum;
        idx=i+1;
       }
     }
     }
     cout<<max<<" "<<idx;

}