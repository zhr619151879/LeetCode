**问题:** Given an array, rotate the array to the right by k steps, where k is non-negative. 即让你去将数组的每个元素往后移动k位

#### 解法一
	最简单的便是使用暴力算法，对数组进行K次的往后移动一位
```
    //暴力
    void rotate(vector<int> &nums, int k) {
        int temp, previous;
        for (int i = 0; i < k; i++) {
            previous = nums[nums.size() - 1];
            for (int j = 0; j < nums.size(); ++j) {
                temp = nums[j];
                nums[j] = previous;
                previous = temp;
            }
        }
    }
```

#### 解法二
	使用额外的一个数组temp，使得其存储原数组中每个元素移动后对应位置的值() nums[i] = temp[(i+k)%10])
```
 //use extra array,put nums[i] to (i+k)%len(nums).
    void rotate2(vector<int> &nums, int k) {
        vector<int> temp(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            temp[(i + k) % (nums.size())] = nums[i];
        }
    }
```

#### 解法三
  使用环形换位,用 next 和 temp 存储当前位置后 k 位的位置与数值, 依次换位.
**关键是换位的结束条件!当length(nums)与k的最大公约数不是1时,可能会出现错误，所以我们用一个count来计数,当
count == length(nums)时，代表已经换了全部的数字**
```
void rotate3(vector<int> &nums, int k) {
        int count = 0;
        k = k%nums.size();
        for (int start = 0; count < nums.size(); ++start) {
            int cur = start;
            int pre = nums[cur];
            do {
                int next = (cur + k) % nums.size();
                int temp = nums[next];
                nums[next] = pre;
                pre = temp;
                cur = next;
                count++;
            }while (cur != start);
        }
    }
```

#### 解法四
  使用三次反转: 先将整个数组反转,然后将前k个数字反转,再将后n-k个数字反转（原理是该问题相当于将后k个数字移动到数组n-k个数字的前面） :trollface:
```
    void rotate4(vector<int> &nums, int k) {
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);

    }

    void reverse(vector<int> &nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start++] = nums[end];
            nums[end--] = temp;
        }
    }
```
