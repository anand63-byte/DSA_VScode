#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//int main(){
    // int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    // int n = 9;
    // int k = 3;
    // int ans[n-k+1];
    // for(int i=0;i<n-k+1;i++){
    //     for(int j=i;j<i+k;j++){
    //         if(arr[j]<0) {
    //             ans[i]=arr[j];
    //             break;
    //         }
    //     }
    // }

    int main() {
    int n;
     n =9;
    vector<int> v={10,30,25,45,50,70,55,85,60};
    //for(int i =0;i<n;i++) cin>>v[i];
    int k ;
    cin>>k;
    
    int ans[n-k+1];
    for(int i=0;i<n-k+1;i++){
        int a = -1;
        for(int j=i;j<i+k;j++){
             a = max(v[j],a);
        }
        ans[i] = a;
    }
    int c = sizeof(ans)/sizeof(ans[0]);
    for(int i=0;i<c;i++) cout<<ans[i]<<" ";
    return 0;
}
    //for(int i=0;i<n-k+1;i++) cout<<ans[i]<<" ";
//}