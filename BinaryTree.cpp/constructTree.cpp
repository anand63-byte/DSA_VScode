#include<iostream>
#include<queue>
using namespace std;
    class Node{
        public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
    };
        void display(Node* root){
        if(root==NULL) return;
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    } 
     
        void displayQueue(Node* root){
         queue<Node*> q;
           q.push(root);
           while(q.size()!=0){
              Node* temp=q.front();
              q.pop();
              cout<<temp->val<<" ";
             if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
           }
        }
           Node* constructTree(int arr[],int n){
            queue<Node*> q;
            Node* root=new Node(arr[0]);
            q.push(root);
            int i=1,j=2;
            while(q.size()>0 && i<n && j<n){
                Node* temp=q.front();
                q.pop();
                Node* l;
                Node* r;
                if(arr[i]!=-1) l=new Node(arr[i]);
                else l=NULL; 
                if(arr[j]!=-1) r=new Node(arr[j]);
                else r=NULL;
                temp->left=l;
                temp->right=r; 
               if(l!=NULL) q.push(l);
               if(r!=NULL) q.push(r); 
                i+=2;
                j+=2;
            }
            return root;
        }
    int main(){
    int arr[] = {1,2,3,4,5,-1,6,-1,-1,7,8,9,-1};
      int n=sizeof(arr)/sizeof(arr[0]);
       
    //display();
    Node* a=constructTree(arr,n);
    display(a);
    //displayQueue(a);
  }