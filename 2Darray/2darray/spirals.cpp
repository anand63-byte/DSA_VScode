#include<iostream>
using namespace std;
int main(){
    int arr[][3]={1,2,3,4,5,6,7,8,9};
     cout<<"simple->";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
            
            }
        
       cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"spiral 1->";
    cout<<endl;
    for(int i=0;i<3;i++){
         if(i%2==0)
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
            else{
                for(int j=2;j>=0;j--) cout<<arr[i][j]<<" ";
            }
        
       cout<<endl;
    }
    cout<<endl<<endl;
     cout<<"spiral 2->";
    cout<<endl;
    //spiral 1
    
for(int i=2;i>=0;i--){
         if(i%2!=0)
        for(int j=2;j>=0;j--)
            cout<<arr[i][j]<<" ";
            else{
                for(int j=0;j<3;j++) cout<<arr[i][j]<<" ";
            }
        
       cout<<endl;
    }
    cout<<endl<<endl;
     //spiral 2
    cout<<"spiral 3->";
    cout<<endl;
   for(int j=0;j<3;j++){
         if(j%2!=0)
        for(int i=2;i>=0;i--)
            cout<<arr[i][j]<<" ";
            else{
                for(int i=0;i<3;i++) cout<<arr[i][j]<<" ";
            }
        
       cout<<endl;
    }
    }