Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the
first two lists.


简单的将两个有序链表合并问题。

法1： 递归法：

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if（l1==NULL) return l2;
        else if (l2==NULL) return l1;
        
        else if (l1->val < l2->val) //l1 为始点
        {
            l1->next = mergeTwoLists(l1->next,l2);
                return l1;
        }
        
        else 
        {
            l2->next = mergeTwoLists(l1,l2->next);
            return l2;
        }
        
    }
};

法2 ： 迭代法：

class Solution{
public:
  ListNode* mergeTwoLists(ListNode* l1,ListNode* l2){
    ListNode *prehead = new ListNode(-1);
    ListNode *temp = prehead;
    
    while(l1!=NULL &&l2!=NULL)
    {
      if(l1->val < l2->val) //l1当前指向的值比l2小，链表从l1当前节点开始
      {
       temp->next = l1;
       l1= l1->next;
       }
       
       else
       {
       temp->next = l2;
       l2 = l2.next;
       }
      temp =temp->next;
      }
      return prehead->next;
      }
      
    }
