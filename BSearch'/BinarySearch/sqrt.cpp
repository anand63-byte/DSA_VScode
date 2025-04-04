#include<iostream>
using namespace std;
int main(){
  int li=0,x;
  cout<<"enter the n";
  cin>>x;
int hi=x;
  while(li<=hi){
    int mid=li+(hi-li)/2;
    if(mid*mid==x) cout<<mid;
    else if(mid*mid>x) hi=mid-1;
    else li=mid+1;
  }
  cout<<hi;
    }