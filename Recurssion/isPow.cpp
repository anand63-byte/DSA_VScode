#include<iostream>
using namespace std;

bool isNpowM(int a,int n){
    if(n==1)   return true;
    if(n%a!=0) return false;
    return isNpowM(a,n/a);
}
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
//    bool flag=isNpowM(m,n);
//    if(flag==true) cout<<"ha";
//    else cout<<"dhatt madhrchd";
cout<<isNpowM(m,n);
}