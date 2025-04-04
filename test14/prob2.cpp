#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;

    cout<<"Enter packets and n of students : ";
    cin>>n>>m;

    vector<int> v(n);
    cout<<"Enter chocolates in each packet : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int ans = INT_MAX;

    int i = 0;
    int j = m-1;

    while(j < n){
        int diff = v[j] - v[i];

        ans = min(ans,diff);
        i++; j++;
    }
    cout<<ans<<endl;
}