#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    switch(x){
        case 1:
        cout<<"sunday";
        break;
        case 2:
        cout<<"monday";
        break;
        //default:
        //cout<<"kuchh bhi khelta hai";
    }
     switch(x>=7){
       case 1:
x*=7;
x-=42;
cout<<x<<endl;
cout<<"Thala for a reason"<<endl;
break;
    }
         switch(x>=49){
       case 1:
x*=7;
x-=42;
cout<<"Thala MULTIPLe for a reason";
    }

}