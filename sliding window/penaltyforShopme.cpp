#include<iostream>
#include<string>
using namespace std;
int main(){
string str="YYNY";
int n=str.length();
int pre[n+1];
pre[0]=0;
for(int i=1;i<=n;i++){
    int count=0;
    if(str[i-1]=='N') {
        count++;
        pre[i]=pre[i-1] + count;
    }
    else pre[i]=pre[i-1] + count;
    
}
for(int i=0;i<=n;i++) cout<<pre[i]<<" ";
int suf[n+1];
suf[n]=0;
cout<<endl<<endl;
for(int i=n-2;i>=-1;i--){
    int count=0;
    if(str[i+1]=='Y') {
        count++;
        suf[i+1]=suf[i+2]+count;
    }
    else suf[i+1]=suf[i+2]+ count;
}
for(int i=0;i<=n;i++) cout<<suf[i]<<" ";
}