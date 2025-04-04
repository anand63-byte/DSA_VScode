#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
bool flag=true;
for(int i=n/2;i>=2;i--){
    if(n%i==0) flag=false;
}
if(flag==true) cout<<n<<" is prime";
else cout<<"kuchh bhi khelta hai";
 

     //now to print all prime before n
     //jaane do 2 loops lagenge questions me kara hoo;
//cout<<endl<<endl;
     // for(int i=2;i<=n;i++){
     //    if(n%i==0){
     //      cout<<"composite";
     //    }
     //    else cout<<i;
     // }
}