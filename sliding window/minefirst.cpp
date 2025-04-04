#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,5,3,2,7,6};
    int ans=0;
    for(int i=0;i<7;i++){
        ans+=arr[i];
        cout<<ans<<" ";
    }
}