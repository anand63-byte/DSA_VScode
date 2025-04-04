#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,1,5,6,2,3};
    int n=6;
    stack<int> st;
    int nse[n+1];
    nse[n]=n+1;
    st.push(n-1);

    for(int i=n-1;i>=0;i--){
        while (st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
        if(st.size()==0) nse[i]=n;
        else nse[i]=st.top();
        st.push(i);
        
    }
    for(int i=0;i<n;i++) cout<<nse[i]<<" ";
    cout<<endl;
    while(st.size()!=0) st.pop();
    int pse[n];
    for(int i=0;i<n;i++){
        while (st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
        if(st.size()==0) pse[i]=-1;
        else pse[i]=st.top();
        st.push(i);
        }
     for(int i=0;i<n;i++) cout<<pse[i]<<" ";

     int max=0;
     for(int i=0;i<n;i++){
        int a =nse[i] - pse[i] -1;
        int b = arr[i]*a;
        if(max<b) max=b;
     }
    cout<<endl;
  cout<<max;
}