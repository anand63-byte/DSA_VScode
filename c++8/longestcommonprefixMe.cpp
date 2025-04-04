#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
vector<string> a={"flower","flight","flow"} ;  
// string s="flower";
 vector<char> u;
vector<char> v;
// for(int i=0;s[i]!='\0';i++){
//    v.push_back(s[i]);
// }
// for(int i=0;s[i]!='\0';i++){
//    cout<<v[i];
// }
sort(a.begin(),a.end());
string first=a[0];
string last=a[a.size()-1];
// for(int i=0;first[i]!='\0';i++){
//     u.push_back(first[i]);}
// for(int i=0;last[i]!='\0';i++){
//    v.push_back(last[i]);}
//string s="";
int i=0;
while(first[i]==last[i]){
   cout<<first[i];
   i++;
}


}