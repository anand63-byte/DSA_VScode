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
       void maxminlevel(Node* root,int& minlevel,int& maxlevel,int level){
        if(root == NULL) return;
        minlevel = min(minlevel,level);
        maxlevel = max(maxlevel,level);
        maxminlevel(root->left,minlevel,maxlevel,level-1);
        maxminlevel(root->right,minlevel,maxlevel,level+1);
       }
    void topview(Node* root,int levels){
    }
    int level(Node* root){
            if(root==NULL) return 0;
            int ans=1 + max(level(root->left),level(root->right));
            return ans;
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
    int arr[] = {1,2,3,4,5,-1,6,-1,-1,7,8,9,-1};
      int n=sizeof(arr)/sizeof(arr[0]);
    Node* a=constructTree(arr,n);
    displayQueue(a);
    int levels = level(a);
    int maxlevel,minlevel;
    maxminlevel(a,maxlevel,minlevel,levels);
    cout<<levels;
    cout<<endl<<endl<<endl;
    cout<<maxlevel<<" "<<minlevel;
    
    topview(a,levels);
  }