#include<iostream>
using namespace std;
   int maze(int er,int ec){
      if( er<1 || ec<1) return 0;
      if(er==1 && ec==1) return 1;
      int rw=maze(er,ec-1);
      int cw=maze(er-1,ec);
      return rw+cw;
   }
    void print(int er,int ec,string s){
      if( er<0 || ec<0) return ;
      if(er==0 && ec==0) cout<<s<<endl;
       print(er,ec-1,s+"R");
       print(er-1,ec,s+"D");
   }
   int main(){
   cout<<maze(3,3);
   //print(2,2,"");
}