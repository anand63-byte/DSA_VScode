#include<iostream>
using namespace std;
  int f(int n){
    if(n==0 || n==1) return n;
   return  f(n-1)+ f(n-2);
    return 45845;
  }
int main(){
    cout<<f(8);
}