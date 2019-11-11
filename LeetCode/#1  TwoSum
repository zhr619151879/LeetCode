给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
示例:给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]

简单方法：暴力枚举（两层循环，第二层从i+1开始） 用want变量记录，减小在循环内计算时间

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp ;
    for (int i=0;i<nums.size();i++)
    {
        int want = target-nums[i];
        for(int j = i+1;j<nums.size();j++)
        {
            if(nums[j]==want)
            {
                temp.push_back(i);
                temp.push_back(j);
                break;
            }
        }
    }
        return temp;
    }
};

优化：可以用哈希表存储元素，用空间换时间。
public int[] twoSum(int[] nums, int target) {
    Map<Integer, Integer> map = new HashMap<>();
    for (int i = 0; i < nums.length; i++) {
        int complement = target - nums[i];
        if (map.containsKey(complement)) {
            return new int[] { map.get(complement), i };
        }
        map.put(nums[i], i);
    }
    throw new IllegalArgumentException("No two sum solution");
}
