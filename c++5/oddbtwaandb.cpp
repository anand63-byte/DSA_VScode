#include<iostream>
using namespace std;
void oddfun(int *x,int *y){
    if(*x>*y) cout<<"chutiya hai kya lowde";
    for(int i=*x;i<=*y;i++){
        if(i%2!=0) cout<<i<<" ";
    }
    //ass sol me rec vaala thoda dekhna hai

}
int main(){
   int a,b;
   cout<<"enter number a: ";
   cin>>a;
   cout<<"enter number b: ";
   cin>>b;
    oddfun(&a,&b);
}