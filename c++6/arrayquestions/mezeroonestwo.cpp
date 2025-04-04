#include<iostream>
#include<vector>
using namespace std;
int main(){

   vector<int> v ={1,2,0,2,0,1,1,0,2,1,0,1};
   vector<int> m(v.size());
   int noz=0,noo=0,now=0;
for(int i=0;i<v.size();i++){
    if(v[i]==0) noz++;
      if(v[i]==1) noo++;
        if(v[i]==2) now++;
        for(int i=0;i<noz;i++) m[i]=0;
        for(int i=0;i<noo;i++) m[i]=1;
        for(int i=0;i<now;i++) m[i]=2;
}
     for(int i=0;i<m.size();i++) cout<<m[i]<<" ";
   


}