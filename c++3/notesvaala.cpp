#include<iostream>
using namespace std;
int main(){
    //let by if;
    int x;
    cout<<"enter the paisa ";
    cin>>x;
    if(x>=2000){
        int a=x/2000;
        x=x-(a*2000);
        cout<<a<<" notes of 2000"<<endl;
    }
    if(x>=1000){
        int a=x/1000;
        x=x-(a*1000);
        cout<<a<<" notes of 1000"<<endl;
    }
    if(x>=500){
        int a=x/500;
        x=x-(a*500);
        cout<<a<<" notes of 500"<<endl;
    }
    if(x>=200){
        int a=x/200;
        x=x-(a*200);
        cout<<a<<" notes of 200"<<endl;
    }
    if(x>=100){
        int a=x/100;
        x=x-(a*100);
        cout<<a<<" notes of 100"<<endl;
    }
    if(x>=50){
        int a=x/50;
        x=x-(a*50);
        cout<<a<<"  notes of 50"<<endl;
    }
    if(x>=20){
        int a=x/20;
        x=x-(a*20);
        cout<<a<<" notes of 20"<<endl;
    }
    if(x>=10){
        int a=x/10;
        x=x-(a*10);
        cout<<a<<" notes of 10"<<endl;
    }
      if(x>=5){
        int a=x/5;
        x=x-(a*5);
        cout<<a<<" notes of 5"<<endl;
    }
    if(x>=2){
        int a=x/2;
        x=x-(a*2);
        cout<<a<<" notes of 2"<<endl;
    }
    if(x>=1){
        int a=x/1;
        x=x-(a*1);
        cout<<a<<" notes of 1";
    }
}