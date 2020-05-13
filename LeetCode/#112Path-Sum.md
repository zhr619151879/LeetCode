Given a binary tree and a sum, determine if the tree has a root-to-leaf path 
such that adding up all the values along the path equals the given sum.

Note: A leaf is a node with no children.

# Solutions :
use recursive and iterate method:

```
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int flag = 0;
    bool hasPathSum(TreeNode *root, int sum){
        search(root, sum);
        if(flag) return true;
        else return false;
    }

    void search(TreeNode *root, int sum){
        if (!root) return ;
        
        if (!root->left && !root->right){
            if(sum == root->val ){
                flag = 1;
            }
        }
        sum -= root->val;
        search(root->left, sum);
        search(root->right, sum);
    }
};
```
