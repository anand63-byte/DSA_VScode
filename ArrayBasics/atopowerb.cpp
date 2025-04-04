// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cout<<"enter a" ;
//   cin>>a;
//   cout<<"enter b";
//   cin>>b;
//   int ans=1;
//   while (b!=0)
//   {
// ans=ans*a;
// b--;
//   }
//   cout<<ans;

// //for loop
// // int ans=1;
// // for(int i=1;i<=b;i++){
// //     ans=ans*a;
// // }
// //   cout<<ans;
// }
#include<iostream>
using namespace std;

void swapi(int mat[][100],int start,int end)
{
     while(start<end)
   {
    swap(mat[start],mat[start+1]);
    start++;
   }
}

int main()
{
    int mat[100][100];
    int n;
    cout<<"enter the size of sq. matrix"<<endl;
    cin>>n;
    cout<<"enter the matrix :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

    for(int i=1;i<n-1;i++)
      swapi(mat,i,n-i); // function calling to swap;
   
    // to print the new matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}