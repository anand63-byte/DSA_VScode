#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string a="anandmishra"; 
vector<int> v(26) ;
for(int i=0;i<a.size();i++){
    char ch=a[i];
    int ascii=ch;
    v[ascii-97]++;
}
int max=0;
for(int i=0;i<26;i++){
    char ch=a[i];
   if(v[i]>max) max=v[i];
}
cout<<max<<endl;
for(int i=0;i<26;i++){
    char ch;
   if(v[i]==max){
     i+=97;
    ch=char(i);
   }
   cout<<ch;
}

}