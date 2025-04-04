#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,1,5,6,2,3};
    int n=6;
    stack<int> st;
    int ans[n];
    //ans[0]=-1;
    st.push(arr[0]);
    for(int i=0;i<n;i++){
        while (st.size()>0 && st.top()<=arr[i]) st.pop();
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
        
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<endl;
}