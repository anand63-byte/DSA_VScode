#include<iostream>
using namespace std;
int main(){
    int x=7;
    int* p=&x;
    *p=*p+1;
    cout<<*p<<endl;//8
    // cout<<x<<endl;//8
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
}