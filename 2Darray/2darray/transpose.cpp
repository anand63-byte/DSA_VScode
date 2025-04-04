#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int r,c;
    cout<<"enter row: ";
    cin>>r;
    cout<<"enter col: ";
    cin>>c;
    int arr[r][c];
    //input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cin>>arr[i][j];
    }
    //printing
    cout<<endl;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cout<<arr[i][j]<<" ";
    cout<<endl;
    }
    cout<<endl<<endl;
    //transpose;
    //  for(int i=0;i<c;i++){
    //     for(int j=0;j<r;j++)
    //     cout<<arr[j][i]<<" ";
    // cout<<endl;
    // }
    //coppy transpose in another array;
    //store
    int t[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++)
        t[i][j]=arr[j][i];
    }
    cout<<endl<<endl;
    //90 degree;
    // for(int j=0;j<r;j++){
    //     for(int i=c-1;i>=0;i--){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    //  for(int j=0;j<r;j++){
    //     for(int i=c-1;i>=0;i--){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<endl<<endl;
    //now print
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++)
        cout<<t[i][j]<<" ";
    cout<<endl;
    } 

}