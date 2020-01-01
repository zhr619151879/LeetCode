### title:
*You are given a binary tree in which each node contains an integer value.
Find the number of paths that sum to a given value.
The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).*

*思路:*
由于可以不从根节点开始,所以需要两个递归
第一个递归从当前节点开始寻找sum为target的个数 (新加一个参数记录当前sum)
第二个递归将根节点往左右子节点推移,继续第一层递归

```c++
class Solution{
public:
    int pathSum(TreeNode* root, int target){
        if (root == NULL) return 0; //没有节点可以开始递归了
        return pathHelper(root,0,target) + pathSum(root->left,target)+pathSum(root->right,target);
    }

    int pathHelper(TreeNode *root, int cur , int target){
        if (root == NULL) return 0; //根节点是递归结束条件
        cur += root->val;
        return (cur == target) + pathHelper(root->left,cur,target)+pathHelper(root->right, cur, target);

    }
};
```

