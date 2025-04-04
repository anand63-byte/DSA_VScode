#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="642928413627";
    int n=s.size();
    int max=-1;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(s[i]>max){
            max=s[i];
            idx=i;
        }
    }
    //second maximum
    idx=-1;
    int sm=-1;
    for(int i=0;i<n;i++){
        if(s[i]>sm && s[i]!=max){
            sm=s[i];
            idx=i;
        }
    }
    cout<<s[idx];

}