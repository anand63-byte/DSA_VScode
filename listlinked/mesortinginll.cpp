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

   Node* rec(Node* head){
    
   }
int main(){
    //ye sab tumhare direct memory allocate ho gaye pointers se
Node *a=new Node(15);
Node *b=new Node(5);
Node *c=new Node(3);
Node *d=new Node(9);
Node *e=new Node(25);
Node *f=new Node(32);
Node *g=new Node(6);

  // ab inhe link karna padega yrr!
  a->next=b;
  b->next=c;
  c->next=d;
  d->next=e;
  e->next=f;
  f->next=g;

   Node* temp = a;
   while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
   }
    Node* sort = rec(a);
}