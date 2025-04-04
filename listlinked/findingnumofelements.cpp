#include<iostream>
using namespace std;
class Node{
public:
int val;
Node* next;
Node(int val){
    this->val=val;
    this->next=NULL;
}


};
int main(){
    //ye sab tumhare direct memory allocate ho gaye pointers se
Node *a=new Node(10);
Node *b=new Node(20);
Node *c=new Node(30);
Node *d=new Node(40);

//ab inhe link karna hai
a->next=b;   
b->next=c;    
c->next=d; 
    
      //finding no of elements or length
int ans=0;
 Node* temp=a;
        while(temp!=NULL){
   ans++;
   temp=temp->next;
   //ans++;
}  
cout<<ans;
}            