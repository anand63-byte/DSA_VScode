#include<iostream>
using namespace std;
    class Node{          //DATA TYPE
        public:
    int val;
    Node* next;
    Node(int val){
    this->val=val;
    this->next=NULL;
    }
    };
    class LinkedList{
        public:
       Node *head;           //DATA STRUCTURE
       Node *tail;
       int size;
       LinkedList(){
        tail=head=NULL;
        size=0;
       }
    void insertatend(int val){
     Node *temp= new Node(val);
     if(size==0) head=tail=temp;
     else{
        tail->next=temp;
       tail=temp;
       }
       size++;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
        temp=temp->next;
        }
        cout<<endl;
    }
    void insertatbegining(int val){
        Node *temp=new Node(val);
        if(size==0) tail=head=temp;
        else{
            temp->next=head;
            head=temp;
        }
        cout<<endl;
    }
    void insertatindex(int idx,int val){
        Node *temp= head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        if(idx==0) insertatbegining(val);
        else if(idx>size || idx<0) cout<<"invalid index";
        else{
            Node *t=new Node(val);
            t->next=temp->next;
             temp->next=t;
            size++;
        }
    }
    void deleteatIdx(int idx){
        Node* temp= head;
        for(int i=1;i<=idx-1;i++) temp=temp->next;
        temp->next=temp->next->next;
    }
    void deleteatHead(){
        if(head->next==NULL) head=NULL;
        else if(head==NULL) cout<<"list is empty";
        else{
            head=head->next;
        }
    }
    int getElement(int idx){
        Node* temp=head;
        for(int i=0;i<=idx-1;i++) temp=temp->next;
        int c=temp->val;
        return c;
    }
    };

int main(){
LinkedList ll;
ll.insertatend(10);
ll.display();
ll.insertatend(20);
ll.display();
ll.insertatend(30);
ll.display();
ll.insertatindex(3,60);
ll.display();
ll.deleteatIdx(4);
ll.display();
ll.deleteatHead();
ll.display();
cout<<ll.getElement(2);
}