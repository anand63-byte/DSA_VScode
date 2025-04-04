#include<iostream>
#include<vector>
using namespace std;
int main(){

   vector<int> v ={1,6,2,3,7,4};
   vector<int> v2;
   //cout<<v2.size()<<endl;
   cout<<v.size()<<endl;
   for(int i= v.size()-1;i>=0;i--) v2.push_back(v[i]);

     for(int i=0;i<v2.size();i++) cout<<v2[i]<<" ";
   


}