#include<iostream>
#include<string>
using namespace std;
int main(){
    string s= "anandaanandmishra";
    int n=s.length();
  int max=0;
  for(int i=0;i<n;i++){
    int count=1;
    for(int j=i+1;j<n;j++){
      if(s[i]==s[j]) count++;
      if(max<count) max=count;
    }
  }
  cout<<max;
  char ch;
  for(int i=0;i<n;i++){
    int count=1;
     char ch=s[i];
    for(int j=i+1;j<n;j++){
        if(s[i]==s[j]) count++;
        if(count==max) ch=s[i];
    }
  }
  cout<<ch;
}