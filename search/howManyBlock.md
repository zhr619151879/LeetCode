给定一个由 0 和 1 的矩阵， 求有多少 1 组成的块 

```c++
#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int n, m;
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
int matrix[100][100];
bool visited[100][100] = {false};

struct node {
    int x;
    int y;
} Node;

bool isTest(int x, int y) {
    // if cross the border
    if (x >= n || y >= m || x < 0 || y < 0) return false;

    if (matrix[x][y] == 0 || visited[x][y] == true) {
        return false;
    }
    return true;
}

void BFS(int x, int y) {
    queue<node> Q;
    Node.x = x;
    Node.y = y;
    Q.push(Node);
    while (!Q.empty()) {
        node temp = Q.front();
        Q.pop();
        for (int i = 0; i < 4; ++i) {
            int newX = temp.x + X[i];
            int newY = temp.y + Y[i];
            if (isTest(newX, newY)) {
                temp.x = newX;
                temp.y = newY;
                Q.push(temp);
                visited[newX][newY] = true;
            }
        }

    }
}

void dfs(int x, int y) {
    if (isTest(x, y)) {
        visited[x][y] = true;
        dfs(x + 1, y);
        dfs(x - 1, y);
        dfs(x, y - 1);
        dfs(x, y + 1);
    }
    return;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
        }
    }

    int ans = 0;
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < m; ++i) {
            if (visited[k][i] == false && matrix[k][i] == 1) {
                ans++;
                dfs(k, i);
            }
        }
    }

    cout<<ans;
}
```