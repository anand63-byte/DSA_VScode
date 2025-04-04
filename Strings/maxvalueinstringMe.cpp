#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
//me faltoo me badaa;
// vector<string> s= {"0123","0023","456","00182","940","002901"};
// vector<int> arr(s.size(),0);
// for(int i=0;i<s.size();i++){
// arr[i]=stoi(s[i]);
// }
// int max=INT_MIN;
// int idx=-1;
// for(int i=0;i<s.size();i++){
// if(arr[i]>max) {
//     max=arr[i];
//      idx=i;}
// }
// cout<<idx<<" "<<max;

//sir->
vector<string> s= {"0123","0023","456","00182","940","002901"};
int max=stoi(s[0]);
for(int i=1;i<=5;i++){  //yaha agar s.size doge to hool dega
   int x=stoi(s[i]);
   if(max<x) max=x;
}
cout<<max;  //2901 print karke dega

///agar maan lo ki poora string coppy karna ho 002901
// vector<string> s= {"0123","0023","456","00182","940","002901"};
// int max=stoi(s[0]);
// string smax=(s[0]);
// for(int i=1;i<=5;i++){
//    int x=stoi(s[i]);
//    if(max<x) {
//       max=x;
//       smax=s[i];
//       }
// }
// cout<<smax;  //002901 print karke dega
}


