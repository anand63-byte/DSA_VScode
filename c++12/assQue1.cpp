#include<iostream>
using namespace std;
void revPrint(int n){
        if(n<1) return;
         cout<<n;
        revPrint(n-1);
    }
void print(int a,int n){
    if(a>n){
        revPrint(n-1);
        return ;
    } ;
    cout<<a;
    print(a+1,n);
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}