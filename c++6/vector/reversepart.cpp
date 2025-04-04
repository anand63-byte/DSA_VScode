#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
  for(int i=0;i<=v.size()-1;i++) cout<<v[i]<<" ";   
}
void rotate(vector<int> &v,int &x,int &y){
  while(x<=y){
swap(v[x],v[y]);
x++;
y--;
}
}
int main(){
    vector<int> v;
    
int n;
cin>>n;
for(int i=0;i<n;i++) {
    int x;
    cin>>x;
    v.push_back(x);
}
cout<<endl;
display(v);
cout<<endl<<endl;
int k;
cout<<"enter k";
cin>>k;
int a=0;
int b=n-1;

rotate(v,a,b);
rotate(v,a,k);
rotate(v,k,b);
display(v);
}

//kuch gadbad dikha raa=ha hai array se sahi hota hai
