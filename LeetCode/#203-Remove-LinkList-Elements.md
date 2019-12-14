## title:
Remove all elements from a linked list of integers that have value val.

* method1 （recursion) 

```c++
class Solution{
public:

    ListNode* removeElements(ListNode* head, int val){
        if(head == NULL){
            return NULL;
        }
        else head->next = removeElements(head->next, val);

        return head->val == val? head->next:head;
    }
};
```


* method2 

```c++
class Solution{
public:

    ListNode* removeElements(ListNode* head, int val){
        while ( head!= NULL && head->val == val){
            head = head->next;
        }
        if (head == NULL) return NULL;

        ListNode *cur = head;
        while (cur->next != NULL){
            if(cur->next->val == val){
                cur->next = cur->next->next;
                continue;
            } 
            
                cur = cur->next;
            
        }
        return head;
    }
};
```