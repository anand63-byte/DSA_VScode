#include<iostream>
using namespace std;
class par{
    public:
    string a;
    int b;
    // par(string a,int b){
    //     this->a=a;
    //     this->b=b;
    // }
};
int main(){
    par v;
    v.a="mishra";
    v.b=1;
   //par b("anand",1);
   //cout<<b.b;
   cout<<v.a;
}