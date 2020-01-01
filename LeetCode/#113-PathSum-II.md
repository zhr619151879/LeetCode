## title：
Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.
Note: A leaf is a node with no children.

**使用回溯法,遍历一遍树即可**




```c++
class Solution {
public:
    vector<int> temp;
    vector<vector<int> > res;

    vector<vector<int>> pathSum(TreeNode *root, int sum) {
        search(root, sum);
        return res;
    }

    void search(TreeNode *root, int sum) {
        if (!root) return;
        temp.push_back(root->val);
        if (!root->left && !root->right) {
            if (sum == root->val) {
                res.push_back(temp);
            }
        }
        sum-= root->val;
        search(root->left, sum);
        search(root->right, sum);
        temp.pop_back();
    }
};
```