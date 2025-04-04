#include<iostream>
#include<vector>
using namespace std;
int mian(){
    vector<int> v(7);
    for(int i=0;i<7;i++){
        v.push_back(i);
    }
for(int i=0;i<7;i++){
    cout<<v[i];
}
return 0;
}