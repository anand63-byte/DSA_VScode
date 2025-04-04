#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
// for(int i=4;i<=3*n+1;i+=4) cout<<i<<endl;


               //another method
            //    int a=4;
            //    while(n--){
            //     cout<<a;
            //     a+=3;
            //    }

            //another method

int a=4;
for(int i=1;i<=n;i++) {
    cout<<a<<endl;
    a+=3;
}
}

