#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// void rev(string &s, int m,int n){
//         for(int i=m,j=n;i<j;i++,j--){
//             swap(s[i],s[j]);
//         }
//         cout<<s<<endl;
//     }


int main(){
    string s="pwskills";
    int n=s.size();
    int k = 2;
    cout<<s<<endl;
    s.pop_back();
    cout<<s;
    // for(int i=0;i<n;i+=2*k){
    //     cout<<i<<endl;
    //     rev(s,i,i+k-1);
    // }
    // for(int i=n-1;i>=0;i--){
    //      s+=s[i];
    //      n++;
    // }
    // for(int i=0;i<n;i++) cout<<s[i];
}