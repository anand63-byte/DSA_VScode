#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"the no of items"<<endl;
    int n;
    cin>>n;
     int k;
    int cost[n];
    for(int i=0;i<n;i++) cin>>cost[i];
    cout<<endl;
    int weight[n];
    for(int i=0;i<n;i++) cin>>weight[i];
    cout<<endl;
    cin>>k;
     cout<<"the max is capacity is"<<k<<endl;
    vector<int> prof(n);
    for(int i=0;i<n;i++){
        prof[i]=cost[i]/weight[i];
    }
    int sum=0;
     while(k>=0){
         int j;
         int m=INT_MIN;
        for(int i=0;i<n;i++){
            for(int g=0;g<n;g++){
                if(m<prof[g]) {
                    m=prof[g];
                    j=g;
                }
            }
            m=INT_MIN;
       }
       cout<<j;
       int s=weight[j]*prof[j];
       k=k-weight[j];
       sum=sum+s;
        
     }
     //cout<<sum;
}