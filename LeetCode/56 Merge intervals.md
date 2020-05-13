### 56 Merge intervals

Given a collection of intervals, merge all overlapping intervals.

> Input: [[1,3],[2,6],[8,10],[15,18]]
> Output: [[1,6],[8,10],[15,18]]
> Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].



```c++
class Solution {
public:

    static bool cmp(vector<int> a, vector<int> b) {
        return a[0] < b[0];
    }


    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(), cmp);
        for (int i = 0; i < intervals.size(); ++i) {
            int L = intervals[i][0];
            int R = intervals[i][1];
            if (!ans.size() || L>ans.back()[1]) {
                ans.push_back({L,R});
            } else{
                ans.back()[1] =  max(ans.back()[1],R);
            }
        }
        return ans;
    }
};
```

