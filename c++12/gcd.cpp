#include<iostream>
#include<string>
using namespace std;
int gcd(int a,int b){
   if(a==0) return b;
    gcd(b%a,a);
    return a;
}
int main(){
    int a=2,b=3;
   cout<< gcd(a,b);
}