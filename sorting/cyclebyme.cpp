#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,5,4,2};
    int n=5;
    //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    int i=0;
    while(i<n){
        int ci= arr[i]-1;
        if(ci==i) i++;
        else swap(arr[i]=arr[ci]);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}