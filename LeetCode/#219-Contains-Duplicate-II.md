## title:
Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

* 用线性表查找会超时，于是使用散列表，维持一个大小为K的窗口


```c++
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> set1;
        for (int i = 0; i <nums.size() ; ++i) {
            if(set1.count(nums[i]) > 0) return true;
            set1.insert(nums[i]);
            if(set1.size()> k){
                set1.erase(nums[i - k]);
            }
        }
        return false;
    }
};
```