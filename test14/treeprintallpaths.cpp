#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


TreeNode* buildTree(const vector<int>& nodes, int index) {
    if (index >= nodes.size() || nodes[index] == -1) {
        return NULL;
    }

    TreeNode* root = new TreeNode(nodes[index]);
    root->left = buildTree(nodes, 2 * index + 1);
    root->right = buildTree(nodes, 2 * index + 2);

    return root;
}
  void rec(TreeNode* root,vector<int>& v){
        if(root==NULL){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            return ;
        }
        rec(root->left,v);
        v.push_back(root->val);
        rec(root->right,v);
    }

     void maxPathSum(TreeNode* root) {
        if(root==NULL) return;
        vector<int>v;
        rec(root,v);
        //maxPathSum(root->right);
         maxPathSum(root->left);
          maxPathSum(root->right);
    }

int main() {
    vector<int> nodes = {-10, 9, 20, -1, -1, 15, 7};
    TreeNode* root = buildTree(nodes, 0);

      maxPathSum(root);

    return 0;
}
