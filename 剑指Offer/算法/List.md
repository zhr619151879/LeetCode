### 1

> 输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

* 方法一: 先统计链表长度，再放入数组。

> ```java
>     public int[] reversePrint(ListNode head) {
>         int count = 0;
>         ListNode tmp = head;
>         while (tmp != null) {
>             count += 1;
>             tmp = tmp.next;
>         }
>         int[] res = new int[count];
>         count--;
>         while (head != null) {
>             res[count--] = head.val;
>             head = head.next;
>         }
>         return res;
>     }
> ```
>
> 

* 方法二：使用遍历一次链表，使用栈存取便可实现反向（递归同理)

> ```java
>     public int[] reversePrint(ListNode head) {
>         Stack<Integer> stack = new Stack<Integer>();
>         while (head!=null){
>             stack.push(head.val);
>             head = head.next;
>         }
>         int[] res = new int[stack.size()];
>         int cnt = 0;
>         while (!stack.empty()) {
>             res[cnt++] = stack.pop();
>         }
>         return res;
>     }
> ```
>
> 