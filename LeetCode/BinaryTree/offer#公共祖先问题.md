* 最近刷到 <<剑指Offer>>的两道最近公共祖先问题, 于是在这总结记录一下~

# Title1: <二叉树的最近公共祖先>
>![image.png](http://www.pokemonzhu.top/wordpress/wp-content/uploads/2020/08/a0761edd533c1b1233d93a74ae36cc14.png) 
>

* 一般涉及到二叉树的遍历问题,我们都是通过递归解决.
* 这题主要是判断三种情况:
  * q == root : 返回q (一个节点也可以为他的祖先)
  * p == root : 返回p (同理)
  * p q 在root的异侧,返回root
  * p q 在root的同侧,继续遍历


   使用后序遍历(左-右-根顺序), 往下寻找,找到p,q后回溯. 
   当结果中(left&&right),那么返回root
   当结果中(left||rihgt), 返回非空的节点 (想想为什么~)

```
public class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null){
            return null;
        }
        if (root == p || root == q) {
            return root == p ? p : q;
        }
        // 左子树查找
        TreeNode left = lowestCommonAncestor(root.left, p, q);
        // 右子树查找
        TreeNode right = lowestCommonAncestor(root.right, p, q);

        if (left == null) {
            return right;
        }
        if (right == null) {
            return left;
        } else return root;
    }
}
```

  


# Title2: <搜索二叉树的最近公共祖先>

> ![image.png](http://www.pokemonzhu.top/wordpress/wp-content/uploads/2020/08/38d041a36b71468de528800d5cddec68.png) 
>


* 与上一题相比, 这题对于我们来说便捷的地方是*我们可以通过与root比较确定p,q节点的位置(左或右)*


```
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null) {
            return null;
        }

        if (root.val < q.val && root.val < p.val) {
            return lowestCommonAncestor(root.right, p, q);
        } else if (root.val > q.val && root.val > p.val) {
            return lowestCommonAncestor(root.left, p, q);
        }
        return root;
    }
```