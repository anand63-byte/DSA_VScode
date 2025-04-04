#include<iostream>
using namespace std;
int main(){
cout<<"enter matrix 1"<<" -> "<<endl;
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
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
cout<<endl;
   }
cout<<endl<<endl;
cout<<"enter matrix 2"<<" -> "<<endl;
int m,n;
    cout<<"enter the no of rows: ";
    cin>>m;
    cout<<"enter the no of coloumns: ";
   cin>>n;
    int brr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl<<endl;
  //printing
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++){
        cout<<brr[i][j]<<" ";
    }
cout<<endl;
   }
   cout<<endl<<endl;
   if(c==m){
   cout<<"resultant matrix is ->"<<endl;
   //multiplying
   for(int i=0;i<r;i++){
    for(int j=0;j<n;j++){
         int ans=0;
        int res[r][n];
   for(int k=0;k<c;k++){
    ans+=arr[i][k]*brr[k][j];
   }
   cout<<ans<<" ";
    }
    cout<<endl;
   }
   cout<<endl<<endl;
   }
   else cout<<"kuchh bhi khelta hai";
}