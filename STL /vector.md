```c++

#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<int> name;
    name.push_back(1);
    name.push_back(4);
    name.push_back(3);

    //vector<int>::iterator  it = name.begin(); 取得是首地址
    auto it = name.begin(); // *it = 1
    it++;   // *it = 2

    //insert -1 to name[2]:
    name.insert(name.begin()+2, -1);
    //erase delete a position or a partition
    name.erase(name.begin()+2);
    name.erase(name.begin(), name.end()-1);
}
```

##### 使用数组初始化:
```c++
int a[] = {1,2,3,4,5,6};
    vector<int> test(a, a+6); //Notice it's not 5
    cout<<test.size(); //6

    sort(test.begin(), test.end()); //sort
```

##### resize()
```
test.resize(int n);
```

##### 定义时赋值:
```
    vector<int> a(5,6);  #五个元素每个都是6
```