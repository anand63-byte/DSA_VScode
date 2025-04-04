#include<iostream>
using namespace std;
int count(int n){
    if(n<10) return n;
    int l=n%10;
    return l+count(n/10);
}
int main(){
    int n=4000;
    cout<< count(n);
}