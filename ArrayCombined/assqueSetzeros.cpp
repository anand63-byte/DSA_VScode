#include<iostream>
#include<vector>
using namespace std;
int main(){
cout<<"enter matrix"<<" -> "<<endl;
int r,c;
    cout<<"enter the no of rows: ";
    cin>>r;
    cout<<"enter the no of coloumns: ";
   cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl<<endl;
  //printing
  cout<<"the previous matrix: ";
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
cout<<endl;
   }
cout<<endl<<endl;
vector<int> v(r,-1);
vector<int> w(c,-1);
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<r;j++){
        if(arr[i][j]==0) {
            v[i]=arr[i][j];
            w[j]=arr[i][j];
            }
    }
}
cout<<"the new matrix: ";
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++){
     if(v[i]==0 || w[j]==0){
        arr[i][j]=0;
        cout<<arr[i][j]<<" ";
     }
     else cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}