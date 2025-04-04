#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
vector<string> a={"flower","flight","flow","flown","float","floraeta"} ;  
 int length=150;
 string ans=a[0];
 int idx = -1;
//  for(int i=0;i<a.size();i++){
//    //for the minimum length
//     int count=0;
//     string k=a[i];
//     for(int j=0;k[j]!='\0';j++) count++;
//     if(length>count){
//         length=count;
//         ans= k;
//         idx = i;
//         }
//      }

    int aa=100;
    int max;
    for(int i=0;i<a.size();i++){
        string m=a[i];
        max=0;
        //storing the index for which the longest prefix
        for(int j=0;j<ans.size();j++){
        if(ans[j]==m[j]) max++;
          } 
         if(aa>max) aa=max;
    }
    for(int i=0;i<aa;i++) cout<<ans[i];
 //for(int i=0;i<finalans.size();i++) cout<<finalans[i];

}