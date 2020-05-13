```c++

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    char maze[m][n];

    for (int i = 0; i < m; ++i) {
        getchar();
        for (int j = 0; j < n; ++j) {
            scanf("%c", &maze[i][j]);
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%c", maze[i][j]);
        }
    }
}```
