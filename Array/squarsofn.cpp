#include<iostream>
using namespace std;
// void sqrFun(int x){
//     for(int i=1;i<=x;i++){
//         int ans=i*i;
//         cout<<ans<<" ";
//     }
// }

//baad me karte hai
//recursion duhraane k baad
int  recSqrFun(int y,int m){ 
    int ans;  
    if(m>y) return ans;
recSqrFun(m+1,y);
 ans=m*m;
//return ans;
}
int main(){
   int n;
cout<<"enter number: ";
cin>>n;
int a=1;
//qrFun(n);
cout<<recSqrFun(n,a);            
//cout<<n;
}
// void printing(int x,int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     printing(x+1,n);
//  return;
// }
// int main(){
//     int n,x=1;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     printing(x,n);
//     printf("the numbers are %d",x);