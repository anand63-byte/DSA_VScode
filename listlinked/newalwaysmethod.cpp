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
(*a).next=b;   //a jo ki node hai ke next me b ka address
(*b).next=c;    //b jo ki node hai ke next me c ka address
c->next=d;      //c jo ki node hai ke next me d ka address
                 //d ke next me NULL hai

        //check;
        cout<<(*a).val<<endl;
        cout<<(*b).val<<endl;
        cout<<c->val<<endl;
        cout<<d->val<<endl;
        // a ke next me jo b ka adress hai use print karta hoo
        cout<<((a->next)->val)<<endl;
        cout<<(*a).next<<endl<<endl;

        //printing through loop

        Node* temp=a;
        while(temp!=NULL){
   cout<<temp->val<<" ";
   temp=temp->next;
        }
}