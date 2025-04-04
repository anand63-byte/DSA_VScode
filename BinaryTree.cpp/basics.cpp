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
        int size(Node* root){
            if(root==NULL) return 0;
            int s= 1+ size(root->left) + size(root->right);
            return s;
        }

        int sum(Node* root){
            if(root==NULL) return 0;
            int ans=root->val+ sum(root->left) + sum(root->right);
            return ans;
        }

        int level(Node* root){
            if(root==NULL) return 0;
            int ans=1 + max(level(root->left),level(root->right));
            return ans;
        }

        int maxVal(Node* root){
            if(root==NULL) return 0;
            int d= max(root->val, max(maxVal(root->left),maxVal(root->right)));
            return d;
        }

        void nthlevel(Node* root,int curr_level,int n){
            if(root==NULL) return;
            if(curr_level==n) {
                cout<<root->val<<" ";
                return;
            }
            nthlevel(root->right,curr_level+1,n);
            nthlevel(root->left,curr_level+1,n);
    
            return;
        }
        void allthenth(Node* root,int n){
            for(int i=0;i<n;i++){
                nthlevel(root,0,i);
                cout<<endl;
            }
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
    int main(){
    
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    Node* g=new Node(70);
    Node* h=new Node(80);
    Node* i=new Node(90);

    //linking
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->left=h;
    h->left=i;

    //display(a);
    // cout<<endl;
    // cout<<sum(a);
    // cout<<endl;
    // cout<<size(a);
    // cout<<endl;
    // cout<<level(a);
    // cout<<endl;
    // cout<<"max val is:-> "<<maxVal(a);
    int n=3;
    //nthlevel ke saare likhna hai baad me    WITH THE OPTIMIZATION
    //1
    //23
    //4567
    //nthlevel(a,0,n);
    //allthenth(a,n);
    displayQueue(a);
  }