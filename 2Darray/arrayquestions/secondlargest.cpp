#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
    bool isPowerOfTwo(int n) {
            bool ans=true;
        if(n==1) return ans;
       else if(n%2==0){
        n/=2;
        ans=isPowerOfTwo(n);
        }
       else return false;
    } 
int main(){
    
//    vector<int> v ={1,6,2,3,7,4,5,2,5,6,4,7,4,8,9,4,1};
//    int max= INT_MIN;
//    int smax= INT_MIN;
//    int thirdmax= INT_MIN;
//    for(int i=0;i<v.size();i++){
//     if(max<v[i]) {
//         max=v[i];
//         }     
//    }
//     for(int i=0;i<v.size();i++){
//         if(smax<v[i] && v[i]!=max) {
//             smax=v[i];
//         }
//    }
//        for(int i=0;i<v.size();i++){
//         if(thirdmax<v[i] && v[i]!=smax && v[i]!=max) {
//             thirdmax=v[i];
//         }
//    }
//    cout<<max<<endl;
//    cout<<smax<<endl;
//    cout<<thirdmax;
int n=1024;

cout<<isPowerOfTwo(n);
}