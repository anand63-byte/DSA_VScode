#include<iostream>
using namespace std;
int main(){
string s="title",t="paper";
int i=0,k;
while(s[i]!='\0'){
    if(s[i]==t[i]) continue;
    else{
        k= ((int)t[i] - (int)s[i] );
    }
    i++;
}
cout<<k;
}