#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7};
int *ptr=arr;
int *p=&arr[0];
cout<<ptr<<endl<<p<<endl;//same address

cout<<ptr[0]<<endl;
for(int i=0;i<7;i++) cout<<ptr[i]<<" ";
cout<<endl<<endl;

   //ab dusare tareeke se

   for(int i=0;i<7;i++){
     cout<<*ptr<<" ";
     ptr++;
   }
   ptr--;
cout<<endl<<endl;
//updation
//we will do in next code
   ptr[0]=7;
   for(int i=0;i<7;i++) cout<<ptr[i]<<" ";
}