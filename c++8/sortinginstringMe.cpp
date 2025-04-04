#include<iostream>
#include<vector>
using namespace std;
int main(){
string s="anandmishra";
// vector<char> ch(s.size(),'\0');
for(int i=0;s[i]!='\0';i++){
//    ch[i]=s[i];
for(int j=0;j<s.size();j++){
    for(int k=0;k<s.size();k++){
        if((int)s[k]>(int)s[k+1]) swap(s[j],s[k]);
    }
}
cout<<s[i];
}

}