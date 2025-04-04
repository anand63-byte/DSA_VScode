#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    int size;
    LinkedList(){
        head = NULL;
        size = 0;
    }

    void insert(int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
        }
        else{
            Node* t = head;
            while(t->next){
                t = t->next;
            }
            t->next = temp;
        }
        size++;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    
    Node* f(Node* start, Node* end){
        Node* prev = NULL;
        Node* curr = start;
        Node* Next = start;

        while(curr != end){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }

        return prev;
    }

    void reverse(int left, int right){
        Node* a = head;
        Node* b = head;
        Node* c = head;
        Node* d = head;

        Node* temp = head;

        while(temp){
            if(temp->next->val == left){
                a = temp;
            }

            else if(temp->val == left){
                b = temp;
            }

            else if(temp->val == right){
                c = temp;
                d = temp->next;
                break;
            }

            temp = temp->next;
        }
        Node* revHead = NULL;
        Node* prevHead = b;
        if(d != NULL){
            revHead = f(b,d);
        }
        else revHead = f(b,c);

        a->next = revHead;
        prevHead->next = d;
        return;
    }
};

int main(){
    LinkedList ll;
    int n;
    cout<<"Enter number of nodes : ";
    cin>>n;
    cout<<"Enter values : ";
    for(int i=1;i<=n;i++){
        int val;
        cin>>val;
        ll.insert(val);
    }

    int left, right;
    cout<<"Enter left and right node values resp : ";
    cin>>left>>right;

    ll.reverse(left,right);
    cout<<"After reversing we get : ";
    ll.display();
}