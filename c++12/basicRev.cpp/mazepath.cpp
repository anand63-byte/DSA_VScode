#include<iostream>
using namespace std;
int mazepath(int m ,int n){     
    if(m<1 || n<1) return 0;     // not the && operator;
    if(m==1 && n==1) return 1;
    int leftways = mazepath(m,n-1);
    int upways = mazepath(m-1,n);
    return leftways + upways ;
}
int main(){
    int m = 3;
    int n = 7;

    cout<<mazepath(m,n);
}