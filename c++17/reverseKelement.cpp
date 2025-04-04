#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& a,int n){
    for(int i=0;i<n;i++){
        cout<<a.front()<<" ";
        int x=a.front();
        a.pop();
        a.push(x);

    }
}
void Reversek(queue<int>& a,int n,int k){
    stack<int>b;
    for(int i=0;i<k;i++){
        b.push(a.front());
        a.pop();
    }
    for(int i=0;i<k;i++){
        a.push(b.top());
        b.pop();
    }
    for(int i=0;i<n-k;i++){
        int x=a.front();
        a.pop();
        a.push(x);
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
    display(a,n);
    cout<<endl;
    Reversek(a,n,k);
    display(a,n);
}