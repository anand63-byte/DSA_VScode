#include<iostream>
#include<vector>
using namespace std;
int count=0;
int inversions(vector<int>& a,vector<int>& b){
    int c=0;
     int i=0,j=0;
     while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c += (a.size()-i);
            j++;
        }
        else i++;
        return c;
     }
}
void merge(vector<int>& a,vector<int>& b, vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) {
            res[k++]=a[i++];
        
        }
        else{
             res[k++]=b[j++];
        }
        }
            
        if(i==a.size()){ 
         while(j<b.size()) {
             res[k++]=b[j++];
             }
             }
        if(j==b.size()) {
            while(i<a.size()){ 
                 res[k++]=a[i++];
                 }
            }

}
void mergesort( vector<int> &a){
    int count=0;
    int n=a.size();
    if(n==1) return ;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> v(n1),b(n2);
    for(int i=0;i<n1;i++) v[i]=a[i];
    for(int i=0;i<n2;i++) b[i]=a[n1+i];
    mergesort(v);
    mergesort(b);
    count+=inversions(v,b);
    merge(v,b,a);

}

int main(){
    int arr[]={5,1,3,0,4,2,6};
   int n1=sizeof(arr)/sizeof(arr[0]);

     vector<int> a(arr,arr+n1);
     mergesort(a);
     cout<<count;
}