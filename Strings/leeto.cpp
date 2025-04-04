#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,7};
    int j;
    bool flag=false;
    for(int i=1;i<6;i++){
         j=i-1;
        while(j>=0){
            if(arr[i]==arr[j]){
                flag=true;
                 break;
            }
            else j--;
        }
       if(flag==true){
         arr[i]=arr[i-1]+1;
        cout<<arr[i];
       }
    }
}