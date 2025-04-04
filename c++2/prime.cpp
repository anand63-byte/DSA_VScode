#include<iostream>
using namespace std;
  bool isprime(int n){
     if(n<2) return false;
        for(int i=n-1;i>=2;i--){
            if(n%i==0) return false;
        }
        return true;
     }
int main(){
    cout<<isprime(1);
}