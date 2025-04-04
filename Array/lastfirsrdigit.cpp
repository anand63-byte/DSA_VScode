#include<iostream>
using namespace std;
int main(){
   long long n;
   cout<<"enter number: ";
   cin>>n;
   cout<<"last digit is- "<<n%10<<endl;
   int fd;
   while(n>9){
    fd=n/10;
    n/=10;
   }
   cout<<"first digit is- "<<fd;
}