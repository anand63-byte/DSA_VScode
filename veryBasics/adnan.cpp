#include<iostream>
using namespace std;
int main(){
    int n=5;
     int a= 65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int c=a+i;
            cout<<(char)c<<" ";
            a--;
        }
        a=65;
        cout<<endl;
    }
}