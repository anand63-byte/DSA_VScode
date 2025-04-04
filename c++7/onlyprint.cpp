#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[][5]={1,3,5,7,3,4,7,8,1,4,2,3,1,2,3,4,5,6,7,8,9,1,2,3,4};
    int n=2;
    for(int i=0;i<5;i++)
   {
    for(int j=0;j<5;j++){
        cout<<arr[i][j]<<" ";
    }
cout<<endl;
   }
cout<<endl<<endl;
     for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        if(i==n || j==n)
        cout<<arr[i][j]<<" ";
        else cout<<"  ";
       }
       cout<<endl;
     }
   

}