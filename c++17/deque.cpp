#include<iostream>
#include<queue>
using namespace std;
class Queue{
    int f;
    int b;
    int s;
    vector<int> v;

    Queue(int val){
        f=0;
        b=0;
        s=0;
        vector<int>m(val);
        v=m;
    }
};
void display(queue<int>& a,int n){
    for(int i=0;i<n;i++){
        int x=a.front();
        a.pop();
        a.push(x);
        cout<<x<<endl;
    }
}
void displayatEven(queue<int>& a,int n){
    for(int i=0;i<n;i++){
        int x=a.front();
        a.pop();
        a.push(x);
        if(i%2==0){
         cout<<x<<endl;
        }
    }
}
int main(){
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    int k=2;
    int n=a.size();
   // display(a,n);
    displayatEven(a,n);
}