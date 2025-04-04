#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,1,5,6,2,3};
    int n=6;
    vector<int> v;
    int idx=-1;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
             if(arr[i]<arr[j]){
                idx=j;
                flag=true;
                break;
            }
        }
        if(flag==true){
                v.push_back(arr[idx]);
            }
            else v.push_back(-1);
    }
    for(int i=0;i<n;i++) cout<<v[i]<<endl;
}