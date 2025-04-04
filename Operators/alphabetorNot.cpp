#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character  ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"upper albhabet-";
    cout<<ch;
    }
    else if(ch>=95 && ch<=122){
        cout<<"lower alphaber-"<<ch;
    }
    else cout<<"not an alphabet";
}

