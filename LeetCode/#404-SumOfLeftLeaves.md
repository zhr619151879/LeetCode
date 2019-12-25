## title:Find the sum of all left leaves in a given binary tree


*思路:设置一个标记参数,遍历二叉树即可,当标记为左并且是叶子节点则返回当前值*


```c++
#include <iostream>
#include <vector>
using namespace std;

  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 

class Solution {
public:
    int dfs(TreeNode* root, int judge){

        if(root == NULL) return 0;

        if (judge && root->left==NULL && root->right==NULL){
            return root->val;
        }
        return dfs(root->left, 1) + dfs(root->right, 0);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root, 0);
    }

};
```