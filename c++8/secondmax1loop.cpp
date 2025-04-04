#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,88,9,5,7,8,65,41,28,65,38};
    int max=-1;
    int smax=-1;
    for(int i=0;i<12;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        if(smax<arr[i]  && arr[i]!=max) smax=arr[i];
    }
    cout<<max<<endl;
    cout<<smax;
}