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
    void inserting(Node* root,Node* value){
        if(root->right==NULL  || root->left==NULL){
            if(root->val < value->val) root->right=value;
            else root->left=value;
            return;
        }
        if(root->val < value->val){
            inserting(root->right,value);
        }
        else inserting(root->left,value);
        return ;
    }
      void inorder(Node* root){
          if(root==NULL) return ;
          inorder(root->left);
          cout<<root->val<<" ";
          inorder(root->right);
          return ;
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
            while(q.size()>0 && i<n){
                Node* temp=q.front();
                q.pop();
                Node* l;
                Node* r;
                if(arr[i]!=-1) l=new Node(arr[i]);
                else l=NULL; 
                if(j!=n && arr[j]!=-1) r=new Node(arr[j]);
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
    int arr[] = {20,8,22,4,12,-1,-1,-1,-1,10,14};
      int n=sizeof(arr)/sizeof(arr[0]);
    Node* a=constructTree(arr,n);
      Node* value=new Node(25);
      inorder(a);
      inserting(a,value);
      //inorder(a);
      //displayQueue(a);
  }