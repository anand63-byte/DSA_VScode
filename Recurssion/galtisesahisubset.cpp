#include<iostream>
#include<string>
#include<vector>
using namespace std;
// void skip(string ans,string s){
// if(s.length()==0) {
//     return;
// }
// char ch=s[0];
// skip(ans,s.substr(1));

// ans+=ch;
// cout<<ans<<endl;
// skip(ans,s.substr(1));

// }
// int main(){
//     string s="abc";
//     skip("", s);
//}
int main(){
    int k=3;
    int n=10;
    int arr[]={1,2,3,4,5,6,7,8,9,11};
vector<int> v(k);
for(int i=n-1;i>=0;i++){
    int j=0;
    while(j<k){
        v[j]=arr[i];
        j++;
    }
}
cout<<" akaf ";
for(int i=0;i<k;i++)cout<<v[i]<<" ";

}