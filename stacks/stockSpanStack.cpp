#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n = 7;
    int ans[n];
    ans[0]=-1;
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while ( st.size() !=0 && arr[st.top()]<=arr[i] ) st.pop();
        if(st.size() == 0) st.push(-1);
        else ans[i]=st.top();
        st.push(i);
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<" ";

    //     int span[n];
    // for(int i=0;i<n;i++) span[i]=i-ans[i];
    // for(int i=0;i<n;i++) cout<<span[i];
}