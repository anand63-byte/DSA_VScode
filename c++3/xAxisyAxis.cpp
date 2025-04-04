#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"enter x ";
cin>>x;
cout<<"enter y ";
cin>>y;
cout<<endl;
if(x==0 && y==0) cout<<"origin";
if(x==0 && y!=0) cout<<"x -axis";
if(x!=0 && y==0) cout<<"y-axis";
else if(x==y) cout<<"slope";//else lagana chahiye

else cout<<"kuchh bhi khelta hai";

}