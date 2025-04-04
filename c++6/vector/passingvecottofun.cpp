#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &m){
    for(int i=0;i<=m.size()-1;i++) cout<<m[i]<<" ";
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
    cout<<v.size()<<endl;
   display(v);
   cout<<endl;
   //reversing
// int i,j;
//    for(i=0,j=v.size()-1;i<=j;i++,j--)
//    swap(v[i],v[j]);
//    display(v);
//    cout<<endl;

     //reversing with extra vector
     vector<int> v2(v.size());
     for(int i=0;i<=v.size()-1;i++){
        v2[i]=v[v.size()-1-i];
     }
      display(v2);
    }