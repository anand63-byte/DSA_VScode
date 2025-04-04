#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int r,c;
    cout<<"enter row: ";
    cin>>r;
    cout<<"enter col: ";
    cin>>c;
    int arr[r][c];
    //input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cin>>arr[i][j];
    }
    //printing
    cout<<endl;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cout<<arr[i][j]<<" ";
    cout<<endl;
    }
    //sum
    int sum=0;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        sum=sum+arr[i][j];
     }
     cout<<"the sum is: "<<sum;

cout<<endl;
// max with index;
int max=INT_MIN;
int idxrow=-1;
int idxcol=-1;
  for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
if(max<arr[i][j]){
    max=arr[i][j];
    idxrow=i;
    idxcol=j;
}
}
}
cout<<"max is: "<<max<<endl<<"index is: "<<idxrow<<","<<idxcol;

}