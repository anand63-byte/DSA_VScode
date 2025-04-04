#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the no.: ";
   cin>>n;
   int rev=0;
   while(n!=0){
    int ld=n%10;
    rev=rev*10+ld;
    n=n/10;
   }
if(n==0) rev=rev*10;
   //enter the no.: 0012345
//543210  ye vaala problem hai
//count se kar sakte hai but vount me bhi problem hai
   cout<<rev;
}