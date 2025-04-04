#include<iostream>
#include<vector>
using namespace std;
int main(){

   vector<int> v ={10,3,5,4,9,4,7,6,1,8,5,4};
   int m= v.size();
   int count=0;
   int n;
   cout<<"enter the no: ";
   cin>>n;
     for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(v[i] + v[j] == n) cout<<v[i]<<"+"<<v[j]<<"="<<n<<endl;
        }
     }
}