#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
    cout<<v.size()<<endl;
    for(int i=0;i<=v.size()-1;i++) cout<<v[i]<<" ";
cout<<endl<<endl;

 //naya
    vector<int> s(5,7);
for(int i=0;i<=s.size()-1;i++) cout<<s[i]<<" ";
cout<<endl<<endl;

//taking input 
vector<int> r;
int n;
cin>>n;
for(int i=0;i<n;i++) {
    int x;
    cin>>x;
    r.push_back(x);
}
cout<<endl;
for(int i=0;i<=r.size()-1;i++) cout<<r[i]<<" ";

//sort(v.begin(),v.end());
 for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
}