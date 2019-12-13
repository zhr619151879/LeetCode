## Title:
Given an integer n, return the number of trailing zeroes in n!.

*分析*: 找到质因子5,25,125的个数即可

```c++
class Solution {
public:
    int trailingZeroes(int n) {
        int fcount = 0;
        while (n) {
            fcount += n / 5;
            n /= 5;
        }
        return fcount;
    }
};
```