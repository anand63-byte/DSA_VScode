#include<iostream>
using namespace std;
int fun(long long *a,int* m1,int* n1){
    *m1=*a%10;
    while(*a>9){
        *n1=*a/10;
        *a/=10;
    }
    cout<<"last digit is- "<<*m1<<endl<<"first digit is- "<<*n1;
}
int main(){
   long long n;
   cout<<"enter number: ";
   cin>>n;
   int fd,ld;
   int* p1=&fd;
   int *p2=&ld;;
    fun(&n,p1,p2);
}