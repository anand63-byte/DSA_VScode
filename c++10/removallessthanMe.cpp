#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// int main(){
// string s="AZYZXBDJKX";
// //string str;
//  vector<char> str;
// for(int i=0;s[i]!='\0';i++){
//     if((int)s[i]>=(int)'X') str.push_back(s[i]);
//     //else str.push_back(s[i]);
// }
// for(int i=0;str[i]!='\0';i++) cout<<str[i]<<" ";
// }
int main(){
cout<<"ghj";
    int k=3;
    int n=10;
    int arr[]={1,2,3,4,5,6,7,8,9,11};
vector<int> v(k);
 int j=0;
for(int i=n-1;i>=0;i++){
        if(j<k){
        v[j]=arr[i];
    }
    j++;
}
cout<<" akaf ";
for(int i=0;i<k;i++)cout<<v[i]<<" ";

}