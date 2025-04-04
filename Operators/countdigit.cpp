#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the no.: ";
   cin>>n;
   int digit=0;
   while(n!=0){
    n=n/10;
    digit++;
   }
   if(n==0) digit++;
   //enter the no.: 000
//1  ye vaala problem hai
   cout<<digit;
}