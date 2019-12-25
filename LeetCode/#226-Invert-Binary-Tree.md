## title: Invert a binary tree

```c++
class Solution {
public:

    TreeNode* swapRoot(TreeNode * root){
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        return root;
    }

    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }

        root = swapRoot(root);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
```
