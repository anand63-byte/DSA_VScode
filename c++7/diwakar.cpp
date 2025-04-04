#include<iostream>
using namespace std;
int median(int a,int b){
    return (a+b)/2;
}
int main(){
    int arr[6][2]={1,2,2,8,2,5,7,9,1,6,4,6};
    int max=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<1;j++) {
        int a=median(arr[i][j],arr[i][j+1]);
        if(max<a || arr[i][j+1]<=arr[i+1][j+1]) max=a;
        }
     }
       for(int i=0;i<5;i++){
        for(int j=0;j<1;j++) {
        int a=median(arr[i][j],arr[i][j+1]);
        if(max=!a || arr[i][j+1]>=arr[i+1][j+1]) cout<<arr[i][j]<<arr[i][j+1]<<endl;
        }
     }
}