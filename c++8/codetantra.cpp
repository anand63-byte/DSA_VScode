#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string m="abcdefgh", n="xymncdef";
string ans=m;
for(int i=0;i<n.size();i++){
        bool flag = true;
    for(int j=0;j<ans.size();j++){
      if(n[i]!=ans[j]) continue;
      else flag=false;
    }
    if(flag==true) ans+=n[i];
}
cout<<ans;
}