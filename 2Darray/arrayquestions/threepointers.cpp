#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> v={2,0,2,1,2,1,2,2,1,0,0,1,2,0,1,0};
  int mid=0;
  int lo=0;
  int hi=v.size()-1;
  while(mid<=hi){
    if(v[mid]==2){
         swap(v[mid],v[hi]);
          hi--;}
    else if(v[mid]==0) {
        swap(v[mid],v[lo]);
        lo++;
        mid++;}
    else if(v[mid]==1) mid++;
  }
  for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}