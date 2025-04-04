#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int k=3;
    int n=10;
    vector<int> ans;
    queue<int> que;
    // for(int i=0;i<n-k+1;i++){
    // for(int j=i;j<i+k;j++){
    //     if(arr[j]<0) {
    //         ans.push_back(arr[j]);
    //         break;
    //     }
    // }
    // }
    // for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
   

      //making queue of indeces having negative value
      for(int i=0;i<n;i++) {
        if(arr[i]<0) que.push(i);
        }

      //if front of que is available bw i to i+k then ans.push(arr[que.front()]);
      int i=0;
      while(i<n-k+1){
         while(que.size()>0 && que.front()<i) que.pop();
        if(que.size()==0 || que.front()>=i+k) ans.push_back(0);
        else ans.push_back(arr[que.front()]);
        i++;
      }
    for(int i=0;i<ans.size();i++)  cout<<ans[i]<<" ";
}