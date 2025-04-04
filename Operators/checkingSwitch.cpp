#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    // switch(ch>=65 && ch<=90)
// agar switch ke saath condtion lagaye ho to case 1 hi
      //lets see agar boolean vaala hata dete hai to
//nahi chalata;
    switch(ch){
        case 1:
cout<<"yahi hai First";
break;
case 66:
cout<<"dekho";
case 83:
cout<<"ye kya hua";
break;
default:
cout<<ch;
    }
    
}