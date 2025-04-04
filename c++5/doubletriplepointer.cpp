     #include<iostream>
using namespace std;
int main(){
    int a=5;
   int *ptr=&a;
   int** p=&ptr;
   int*** ptr3=&p;
   cout<<&a<<endl;
   cout<<&ptr<<endl;
   cout<<&p<<endl;
   cout<<&ptr3<<endl;
   cout<<"dekho teeno line same ayega"<<endl;
   cout<<ptr<<endl;;
   cout<<p<<endl;
   cout<<ptr3<<endl;
   
   cout<<*ptr<<endl;
   cout<<**p<<endl;
   cout<<***ptr3<<endl;

}