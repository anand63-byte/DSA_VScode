#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7};
int *ptr=arr;
*ptr=8;
ptr++;
*ptr=9;
ptr--;

   for(int i=0;i<7;i++){
     cout<<*ptr<<" ";
     ptr++;
   }
   ptr--;

}