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
    bool recursiveHasPathSum(TreeNode *root, int sum) {
        if (root == NULL) return false;
        if (root->left == NULL && root->right == NULL && sum == root->val) {
            return true;
        } else
            return recursiveHasPathSum(root->left, sum - root->val) ||
                   recursiveHasPathSum(root->right, sum - root->val);
    }

    bool iterateHasPathSum(TreeNode *root, int sum) {
        stack<TreeNode> nodeStack;
        stack<int> sumStack;
        nodeStack.push(*root);
        sumStack.push((sum) - root->val);
        while (!nodeStack.empty()) {
            TreeNode temp = nodeStack.top();
            int curSum = sumStack.top();
            nodeStack.pop();
            sumStack.pop();
            if (temp.left == NULL && temp.right == NULL &&
                curSum == 0)
                return true;
            else{
                if(temp.right!=NULL){
                    nodeStack.push(*temp.right);
                    sumStack.push((curSum-temp.right->val));
                }

                if(temp.left!=NULL){
                    nodeStack.push(*temp.left);
                    sumStack.push((curSum-temp.left->val));
                }
            }
        }
        return false;
    }
};
```
