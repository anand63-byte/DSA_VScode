#include<iostream>
#include<vector>
using namespace std;
int ans(int a,int b){
   vector<int> v(5);
  if(a==0 && b==0) return  v.size();
  if(a==0 || b>1) {
    v.push_back(b);
    b=b-1;
    }
  if(a>0 && b==0) {
    v.push_back(a);
    a=a-1;
    }
    ans(a,b);
}
int main(){
cout<<ans(2,5);
}