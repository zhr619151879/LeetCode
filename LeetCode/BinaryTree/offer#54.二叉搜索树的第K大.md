# Title:

> 给定一棵二叉搜索树，请找出其中第k大的节点。
>
>  
>
> 示例 1:
>
> 输入: root = [3,1,4,null,2], k = 1
>    3
>   / \
>  1   4
>   \
>    2
> 输出: 4
> 示例 2:
>
> 输入: root = [5,3,6,2,4,null,null,1], k = 3
>        5
>       / \
>      3   6
>     / \
>    2   4
>   /
>  1
> 输出: 4
>
> 

---



### 方法一

* 刚入手这道题,直观方法便是得到*中序遍历*后的递增数组,再返回第index[size-k]的值

```
class Solution {
    public int kthLargest(TreeNode root, int k) {
    	LinkedList<Integer> arr = new LinkedList<>();
    	LinkedList<Integer> res = this.inorder(root, arr);
    	System.out.println(res);
    	return res.get(res.size()-k);
    }

    public LinkedList<Integer> inorder(TreeNode root,LinkedList<Integer> arr){
    	if (root == null) {
			return arr;
		}
    	
    	arr = inorder(root.left, arr);
    	arr.add(root.val);
    	arr = inorder(root.right, arr);
    	
    	return arr;
    }
}
```



### 方法二

* 后来看了题解之后,发现了新大陆:

> 由于中序遍历得到的是递增序列, 我们可以反中序遍历(即左根右->右根左),得到的便是递减序列.然后只要遍历k次便可以直接返回结果~
>
> 不需要得到完整的数组.节约内存.



```
class Solution {
    int res, k;
    public int kthLargest(TreeNode root, int k) {
        this.k = k;
        dfs(root);
        return res;
    }
    void dfs(TreeNode root) {
        if(root == null) return;
        dfs(root.right);
        if(k == 0) return;
        if(--k == 0) res = root.val;
        dfs(root.left);
    }
}
```

