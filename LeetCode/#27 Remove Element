Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

很简单，使用双指针法，快指针遇到跟val值不同的就赋值给慢指针，遇到相同的便后移：
class Solution {
public:
    int removeElement(vector<int>& a, int val) {
       int j = 0;
        for(int i = 0;i<a.size();i++){
         if(a[i] == val){
             
         }
            
         else{
            a[j++] = a[i];
         }
        }
        return j;
    }
};
