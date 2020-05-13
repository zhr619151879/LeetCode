##### common queue
```c++
   queue<int> que;
    que.push(1);
    que.push(1);

    int ft = que.front();
    int bk = que.back();
    que.pop(); //erase the front number
```


##### priority queue
```c++
  //优先队列 底层用堆实现
    priority_queue<int> pr_que;
    pr_que.push(1);
    pr_que.push(3);
    pr_que.push(4);
    cout << pr_que.top(); //access top of heap

    //let the smallest number come first
    priority_queue<char, vector<char>, greater<char>> pr_que2;
    //如果是结构体结构，则需重载操作符 ＜
    struct fruit{
        string name;
        int price; 
        friend bool operator < (fruit &f1, fruit &f2){
            return f1.price < f2.price;
        }
    };
```