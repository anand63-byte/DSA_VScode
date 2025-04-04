#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int m=3,n=3;
    int arr[][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
cout<<endl;
   }
int minr=0,minc=0,maxr=m-1,maxc=n-1;
while(minr<=maxr && minc<=maxc){
    for(int j=minc;j<=maxc;j++) cout<<arr[minr][j];
minr++;

    for(int i=minr;i<=maxr;i++) cout<<arr[i][maxc];
maxc--;
    for(int j=maxc;j>=minc;j--) cout<<arr[maxr][j];
maxr--;
    for(int i=maxr;i>=minr;i--) cout<<arr[i][minc];
minc++;
}
}