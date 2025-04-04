#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
// vector<string> s= {"0123","0023","456","00182","940","002901"};
vector<string> v(6);
for(int i=0;i<6;i++){
    string x;
    cin>>x;
    v.push_back(x);
}
    for(int i=0;i<v.size();i++){//yaha 6 karne pe nahile rhahai bhenklda kyoki string ki baat chal rahi hai
    
    cout<<v[i]<<" ";
 }
 int max=stoi(v[0]);
 string smax=v[0];
 for(int i=0;i<6;i++){ //yaha v.size me hool de raha hai
 if(max<stoi(v[i])) {
    max=stoi(v[i]);
    smax=v[i];
    }
 }cout<<smax;
 }
