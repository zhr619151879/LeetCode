#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    //head file: #include <algorithm>
    //max(a,b)
    //min(a,b)
    //abs(a,b)
    //swap(a,b)

    int a[5] = {1,2,3,4,5};
    // 填充数组
    fill(a, a+5,233);
    memset(a, sizeof(a)/ sizeof(int),0);

    //sort
    sort(a, a+5); //last: 尾元素地址的后一个地址
    // use cmp:
    struct node{
        int x, y;
    }Node[10];

    bool cmp(node a , node b){
        return a.x > b.y;
    }
    sort(Node, cmp);


    //vector sort:
    vector<int> vi;
    sort(vi.begin(), vi.end(), cmp);
}

```c++
lower_bound(a, a + 10 , 1); //第一个大于等于 1 的位置
upper_bound(a, a+ 10, 1) // 第一个大于 1 的位置
```
