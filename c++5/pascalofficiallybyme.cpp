#include<iostream>
using namespace std;
int fact(int x){
    if(x==1 || x==0) return 1;
    int ans = x*fact((x-1));
}
int combination(int a,int b){
    int ans = fact(a)/(fact(a-b)*fact(b));
}
int main(){
    cout<<"enter the no of lines -> "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}