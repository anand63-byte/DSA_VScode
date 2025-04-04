 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of lines: ";
    cin>>n;
    cout<<1<<endl;
    for(int i=2;i<=n-1;i++) {
        for(int j=i;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}