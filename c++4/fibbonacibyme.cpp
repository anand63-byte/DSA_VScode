#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,n,fibbo;
    cout<<"enter the n: ";
    cin>>n;
    cout<<1<<" "<<2<<" ";
    for(int i=1;i<=n-2;i++){
        fibbo=a+b;
        a=b;
        b=fibbo;
         cout<<fibbo<<" ";
    }
  //cout<<fibbo;  
}