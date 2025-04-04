#include<iostream>
#include<vector>
using namespace std;
vector<int> hm(vector<int> a,vector<int> ans, int n){
    if(n==0){
        // for(int i=0;i<ans.size();i++) cout<<ans[i];
        return ans;
    }
   for(int i=0;i<a.size();i++){
    if(a[i]==0) a.push_back(01);
    else a.push_back(10);
    hm(ans,{},n-1);
   }
}
int main(){
    int n=3;
    vector<int> a;
    vector<int> ans;
    hm({0},{},3);
    for(int i=0;i<ans.size();i++) cout<<ans[i];
}