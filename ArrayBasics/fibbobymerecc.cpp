#include<iostream>
using namespace std;
int fibbo(int x){
if(x==1||x==2) return 1;
int kaho=fibbo(x-1)+fibbo(x-2);
return kaho;
}
int main(){
   int n;
   cout<<"enter the n";
   cin>>n;
   int ans=fibbo(n);
   cout<<ans;
}

