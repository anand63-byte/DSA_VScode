#include<iostream>
using namespace std;
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
}
int main(){
    int arr[]={1,2,4,3};
    int idx=-1;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]) {
            idx=i;
            break;
        }
        }
    //to reverse from idx to end;
    reverse(arr,idx+1,n-1);
     reverse(arr,idx,idx+1);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}