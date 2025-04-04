#include<iostream>
#include<vector>
using namespace std;
int lo(string s) {
        vector<int> v;
        //sort(s.begin(),s.end());
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==s[n-1]) return n;
            int j=i+1;
           int  count =1;
              while(s[i]==s[j]){
              count ++;
              j++;
              i++;
              }
              v.push_back(count);
        }
        cout<<v[0]<<v[1];
        return -1;
}
int main(){
string s="abccccdd";
// cout<<s.size()<<endl;
//  int count=0;
// for(int i=0;s[i]!='\0';i++){
//     cout<<s[i];
//      count++;
//  }
//  cout<<endl<<count;
 
 cout<<lo(s);
// string s[]= {"0123","0023","456","00182","940","2901"};
 ///////////array of sting ho gaya;
}