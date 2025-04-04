#include<iostream>
using namespace std;
int pow(int a , int b){
    if(b==1) return a;
    if(b%2 != 0) return pow(a,b/2) * pow(a,b/2) * a;
    else  return pow(a,b/2) * pow(a,b/2);
}

// with extra variable ans;
int pow(int a , int b,int ans){
    if(b==1) return a;
    if(b%2 != 0) ans = pow(a,b/2,ans) * pow(a,b/2,ans) * a;
    else  ans = pow(a,b/2,ans) * pow(a,b/2,ans);

    return ans;
}
int main(){
    int a = 2;
    int b = 7;
    int ans;
    cout<<pow(a,b);
}