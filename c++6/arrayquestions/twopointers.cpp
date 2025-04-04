#include<iostream>
#include<vector>
using namespace std;
int main(){
    //reversing
//    int j;
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     for(int i=0,j=15;i<j;i++,j--){
//         swap(arr[i],arr[j]);
//     }
//     for(int i=0;i<16;i++) cout<<arr[i]<<" ";

  //two pointers
   vector<int> v ={1,1,0,0,1,1,0,1};

   int i=0,j=v.size()-1;
   while(i<j){
    if(v[i]==0) i++;
    else if(v[j]==1) j--;
    else if(v[i]==1 && v[j]==0) swap(v[i],v[j]);
   }
     for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   


}