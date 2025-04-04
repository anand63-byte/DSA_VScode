
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v= {0,1,1,0,1,1,0,1,0,1,1,0,0,1,1,1};
    
    int n = v.size();
    int i = n-1;
    string s = "";
     while(i>=1){
         int count = 0;
         if(v[i] == 1){
             while(v[i] == v[i-1]) {
                 count ++;
                 i -- ;
             }
             s += to_string(count);
         }
         else {
             s += "0";
             i--;
         }
     }
     cout<<s;

    return 0;
}