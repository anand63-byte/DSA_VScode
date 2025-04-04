#include<iostream>
#include<string>
using namespace std;
int main(){
int arr[]={1,3,7,9,9,6,4,9,8};
int k;
cout<<"enter the k: ";
cin>>k;
int n=9;
int currsum=0;
for(int i=0;i<k;i++){
currsum+=arr[i];
}
int i=1,j=k;
int max=0;
while(j<n){
    currsum=currsum-arr[i-1]+arr[j];
    i++;
    j++;
    if(max<currsum) max=currsum;
}
cout<<max;
}