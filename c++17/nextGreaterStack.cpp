#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,3,5,1,6,8};
    int n=6;
    stack<int> st;
    int ans[n];
    st.push(arr[n-1]);
    for(int i=n-1;i>=0;i--){
        while (st.size()>0 && st.top()<=arr[i]) st.pop();
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
        
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<endl;
}