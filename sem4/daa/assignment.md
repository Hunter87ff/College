DAA Assignments
---

### ✅ **1. Linear Search (O(n))**

```c
#include <stdio.h>
int main() {
    int n, key, arr[100], i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) if(arr[i] == key) break;
    if(i < n) printf("Found at index %d\n", i); else printf("Not found\n");
    return 0;
}
```

---

### ✅ **2. Binary Search (O(log n))**

```c
#include <stdio.h>
int binarySearch(int a[], int l, int r, int x) {
    while(l <= r) {
        int m = l + (r - l)/2;
        if(a[m] == x) return m;
        if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
int main() {
    int n, key, arr[100], i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter sorted array: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int res = binarySearch(arr, 0, n-1, key);
    (res == -1) ? printf("Not found\n") : printf("Found at index %d\n", res);
    return 0;
}
```

---

### ✅ **3. Interpolation Search (O(log log n))**

```c
#include <stdio.h>
int interpolationSearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while(low <= high && x >= arr[low] && x <= arr[high]) {
        if(low == high) return (arr[low] == x) ? low : -1;
        int pos = low + ((x - arr[low]) * (high - low)) / (arr[high] - arr[low]);
        if(arr[pos] == x) return pos;
        if(arr[pos] < x) low = pos + 1;
        else high = pos - 1;
    }
    return -1;
}
int main() {
    int n, key, arr[100], i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter sorted array: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int res = interpolationSearch(arr, n, key);
    (res == -1) ? printf("Not found\n") : printf("Found at index %d\n", res);
    return 0;
}
```

---

### ✅ **4. Recursion Examples**

#### a. Factorial

```c
#include <stdio.h>
int fact(int n) { return (n == 0) ? 1 : n * fact(n - 1); }
int main() {
    int n; scanf("%d", &n);
    printf("Factorial: %d\n", fact(n));
    return 0;
}
```

#### b. Sum of Digits

```c
#include <stdio.h>
int sumDigits(int n) {
    return n == 0 ? 0 : n % 10 + sumDigits(n / 10);
}
int main() {
    int n; scanf("%d", &n);
    printf("Sum of digits: %d\n", sumDigits(n));
    return 0;
}
```

#### c. Decimal to Binary

```c
#include <stdio.h>
void decToBin(int n) {
    if(n > 1) decToBin(n / 2);
    printf("%d", n % 2);
}
int main() {
    int n; scanf("%d", &n);
    decToBin(n); printf("\n");
    return 0;
}
```

---

### ✅ **5. Bubble Sort (O(n²))**

```c
#include <stdio.h>
int main() {
    int n, i, j, arr[100], temp;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 0; i < n-1; i++)
        for(j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1])
                temp = arr[j], arr[j] = arr[j+1], arr[j+1] = temp;
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
```

---

### ✅ **6. Sorting Algorithms**

#### a. Merge Sort

```c
#include <stdio.h>
void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++) L[i] = a[l+i];
    for(int i = 0; i < n2; i++) R[i] = a[m+1+i];
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2)
        a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while(i < n1) a[k++] = L[i++];
    while(j < n2) a[k++] = R[j++];
}
void mergeSort(int a[], int l, int r) {
    if(l < r) {
        int m = l + (r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}
int main() {
    int n, arr[100];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    mergeSort(arr, 0, n-1);
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
```

#### b. Quick Sort

```c
#include <stdio.h>
int partition(int a[], int l, int h) {
    int p = a[h], i = l - 1;
    for(int j = l; j < h; j++) if(a[j] < p) {
        i++;
        int t = a[i]; a[i] = a[j]; a[j] = t;
    }
    int t = a[i+1]; a[i+1] = a[h]; a[h] = t;
    return i + 1;
}
void quickSort(int a[], int l, int h) {
    if(l < h) {
        int pi = partition(a, l, h);
        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, h);
    }
}
int main() {
    int n, arr[100];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    quickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
```

#### c. Heap Sort

```c
#include <stdio.h>
void heapify(int a[], int n, int i) {
    int largest = i, l = 2*i+1, r = 2*i+2;
    if(l < n && a[l] > a[largest]) largest = l;
    if(r < n && a[r] > a[largest]) largest = r;
    if(largest != i) {
        int t = a[i]; a[i] = a[largest]; a[largest] = t;
        heapify(a, n, largest);
    }
}
void heapSort(int a[], int n) {
    for(int i = n/2-1; i >= 0; i--) heapify(a, n, i);
    for(int i = n-1; i >= 0; i--) {
        int t = a[0]; a[0] = a[i]; a[i] = t;
        heapify(a, i, 0);
    }
}
int main() {
    int n, arr[100];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    heapSort(arr, n);
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
```

---

### ✅ **7. Strassen's Matrix Multiplication**

(Too long for brevity, but can be provided on request.)

---

### ✅ **8. Fractional Knapsack (Greedy)**

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct { float w, v, ratio; } Item;

int cmp(const void* a, const void* b) {
    Item *i1 = (Item*)a, *i2 = (Item*)b;
    return (i2->ratio > i1->ratio) ? 1 : -1;
}

float fractionalKnapsack(float W, Item items[], int n) {
    qsort(items, n, sizeof(Item), cmp);
    float totalValue = 0;
    for(int i = 0; i < n && W > 0; i++) {
        if(items[i].w <= W) {
            totalValue += items[i].v;
            W -= items[i].w;
        } else {
            totalValue += items[i].ratio * W;
            W = 0;
        }
    }
    return totalValue;
}

int main() {
    int n; float W;
    printf("Enter number of items: "); scanf("%d", &n);
    Item items[n];
    for(int i = 0; i < n; i++) {
        printf("Enter weight and value: ");
        scanf("%f%f", &items[i].w, &items[i].v);
        items[i].ratio = items[i].v / items[i].w;
    }
    printf("Enter capacity: "); scanf("%f", &W);
    printf("Max profit: %.2f\n", fractionalKnapsack(W, items, n));
    return 0;
}
```

---

### ✅ **9. Job Sequencing**

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct { char id; int deadline, profit; } Job;

int cmp(const void* a, const void* b) {
    return ((Job*)b)->profit - ((Job*)a)->profit;
}

void jobSequencing(Job jobs[], int n) {
    qsort(jobs, n, sizeof(Job), cmp);
    int slot[n], maxProfit = 0;
    for(int i = 0; i < n; i++) slot[i] = 0;

    for(int i = 0; i < n; i++) {
        for(int j = jobs[i].deadline - 1; j >= 0; j--) {
            if(slot[j] == 0) {
                slot[j] = 1;
                maxProfit += jobs[i].profit;
                break;
            }
        }
    }
    printf("Max Profit: %d\n", maxProfit);
}

int main() {
    int n; printf("Enter number of jobs: "); scanf("%d", &n);
    Job jobs[n];
    for(int i = 0; i < n; i++) {
        printf("Enter ID, Deadline, Profit: ");
        scanf(" %c %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }
    jobSequencing(jobs, n);
    return 0;
}
```

---

### ✅ **10. Fibonacci using Naive and DP**

```c
#include <stdio.h>
#include <time.h>

int fibNaive(int n) {
    if(n <= 1) return n;
    return fibNaive(n - 1) + fibNaive(n - 2);
}

int fibDP(int n) {
    int f[n+1];
    f[0] = 0; f[1] = 1;
    for(int i = 2; i <= n; i++) f[i] = f[i-1] + f[i-2];
    return f[n];
}

int main() {
    int n; printf("Enter N: "); scanf("%d", &n);

    clock_t start = clock();
    printf("Fib(Naive): %d\n", fibNaive(n));
    printf("Time taken: %.5f s\n", (double)(clock()-start)/CLOCKS_PER_SEC);

    start = clock();
    printf("Fib(DP): %d\n", fibDP(n));
    printf("Time taken: %.5f s\n", (double)(clock()-start)/CLOCKS_PER_SEC);

    return 0;
}
```

---

### ✅ **11. Matrix Chain Multiplication**

```c
#include <stdio.h>
#include <limits.h>

int matrixChainOrder(int p[], int n) {
    int m[n][n];
    for(int i = 1; i < n; i++) m[i][i] = 0;
    for(int L = 2; L < n; L++) {
        for(int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for(int k = i; k < j; k++) {
                int cost = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if(cost < m[i][j]) m[i][j] = cost;
            }
        }
    }
    return m[1][n-1];
}

int main() {
    int dims[] = {10, 30, 5, 60};
    int n = sizeof(dims)/sizeof(dims[0]);
    printf("Min multiplications: %d\n", matrixChainOrder(dims, n));
    return 0;
}
```

---

### ✅ **12. 0/1 Knapsack (DP)**

```c
#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))

int knapSack(int W, int wt[], int val[], int n) {
    int dp[n+1][W+1];
    for(int i = 0; i <= n; i++)
        for(int w = 0; w <= W; w++) {
            if(i == 0 || w == 0) dp[i][w] = 0;
            else if(wt[i-1] <= w)
                dp[i][w] = max(val[i-1] + dp[i-1][w-wt[i-1]], dp[i-1][w]);
            else dp[i][w] = dp[i-1][w];
        }
    return dp[n][W];
}

int main() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50, n = sizeof(val)/sizeof(val[0]);
    printf("Max value: %d\n", knapSack(W, wt, val, n));
    return 0;
}
```

---

### ✅ **13. BFS and DFS Traversal**

```c
#include <stdio.h>
#include <stdlib.h>

void dfs(int g[][10], int v, int n, int vis[]) {
    vis[v] = 1;
    printf("%d ", v);
    for(int i = 0; i < n; i++) if(g[v][i] && !vis[i]) dfs(g, i, n, vis);
}

void bfs(int g[][10], int s, int n) {
    int q[10], f = 0, r = 0, vis[10] = {0};
    q[r++] = s; vis[s] = 1;
    while(f < r) {
        int v = q[f++];
        printf("%d ", v);
        for(int i = 0; i < n; i++) if(g[v][i] && !vis[i]) {
            vis[i] = 1; q[r++] = i;
        }
    }
}

int main() {
    int n, g[10][10] = {0};
    printf("Enter number of vertices: "); scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &g[i][j]);

    printf("DFS: "); int vis[10] = {0}; dfs(g, 0, n, vis); printf("\n");
    printf("BFS: "); bfs(g, 0, n); printf("\n");
    return 0;
}
```

---

### ✅ **14. Prim's MST**

(Short version with adjacency matrix)

```c
#include <stdio.h>
#include <limits.h>

#define V 5

int minKey(int key[], int mstSet[]) {
    int min = INT_MAX, min_index;
    for(int v = 0; v < V; v++)
        if(!mstSet[v] && key[v] < min)
            min = key[v], min_index = v;
    return min_index;
}

void printMST(int parent[], int graph[V][V]) {
    printf("Edge \tWeight\n");
    for(int i = 1; i < V; i++)
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
}

void primMST(int graph[V][V]) {
    int parent[V], key[V], mstSet[V];
    for(int i = 0; i < V; i++) key[i] = INT_MAX, mstSet[i] = 0;
    key[0] = 0; parent[0] = -1;

    for(int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = 1;
        for(int v = 0; v < V; v++)
            if(graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }
    printMST(parent, graph);
}

int main() {
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };
    primMST(graph);
    return 0;
}
```

---

### ✅ **15. Kruskal's MST**

(not done yet....)
---

### ✅ **16. Dijkstra’s Algorithm**

```c
#include <stdio.h>
#include <limits.h>

#define V 6

int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, min_index;
    for(int v = 0; v < V; v++)
        if(!sptSet[v] && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V], sptSet[V];
    for(int i = 0; i < V; i++) dist[i] = INT_MAX, sptSet[i] = 0;
    dist[src] = 0;

    for(int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = 1;
        for(int v = 0; v < V; v++)
            if(!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printf("Vertex\tDistance from source\n");
    for(int i = 0; i < V; i++) printf("%d \t %d\n", i, dist[i]);
}

int main() {
    int graph[V][V] = {
        {0, 10, 0, 0, 0, 0},
        {10, 0, 10, 20, 0, 0},
        {0, 10, 0, 0, 30, 0},
        {0, 20, 0, 0, 10, 10},
        {0, 0, 30, 10, 0, 10},
        {0, 0, 0, 10, 10, 0}
    };
    dijkstra(graph, 0);
    return 0;
}
```

---

### ✅ **17. Bellman Ford**

```c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Edge { int src, dest, weight; };

void bellmanFord(struct Edge edges[], int V, int E, int src) {
    int dist[V];
    for(int i = 0; i < V; i++) dist[i] = INT_MAX;
    dist[src] = 0;

    for(int i = 1; i <= V - 1; i++)
        for(int j = 0; j < E; j++) {
            int u = edges[j].src;
            int v = edges[j].dest;
            int w = edges[j].weight;
            if(dist[u] != INT_MAX && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }

    for(int j = 0; j < E; j++) {
        int u = edges[j].src;
        int v = edges[j].dest;
        int w = edges[j].weight;
        if(dist[u] != INT_MAX && dist[u] + w < dist[v])
            printf("Graph contains negative weight cycle\n");
    }

    printf("Vertex\tDistance from source\n");
    for(int i = 0; i < V; i++) printf("%d \t %d\n", i, dist[i]);
}

int main() {
    int V = 5, E = 8;
    struct Edge edges[] = {
        {0,1,-1}, {0,2,4}, {1,2,3}, {1,3,2},
        {1,4,2}, {3,2,5}, {3,1,1}, {4,3,-3}
    };
    bellmanFord(edges, V, E, 0);
    return 0;
}
```

---

### ✅ **18. Floyd-Warshall**

```c
#include <stdio.h>
#define INF 99999

void floydWarshall(int graph[][4], int V) {
    int dist[V][V];
    for(int i = 0; i < V; i++)
        for(int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    for(int k = 0; k < V; k++)
        for(int i = 0; i < V; i++)
            for(int j = 0; j < V; j++)
                if(dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];

    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++)
            printf("%d\t", dist[i][j] == INF ? INF : dist[i][j]);
        printf("\n");
    }
}

int main() {
    int graph[4][4] = {
        {0, 3, INF, 5},
        {2, 0, INF, 4},
        {INF, 1, 0, INF},
        {INF, INF, 2, 0}
    };
    floydWarshall(graph, 4);
    return 0;
}
```

---

### ✅ **19. N-Queens Problem**

```c
#include <stdio.h>

int isSafe(int board[10][10], int row, int col, int n) {
    for(int i = 0; i < col; i++) if(board[row][i]) return 0;
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if(board[i][j]) return 0;
    for(int i = row, j = col; i < n && j >= 0; i++, j--)
        if(board[i][j]) return 0;
    return 1;
}

int solveNQ(int board[10][10], int col, int n) {
    if(col >= n) return 1;
    for(int i = 0; i < n; i++) {
        if(isSafe(board, i, col, n)) {
            board[i][col] = 1;
            if(solveNQ(board, col + 1, n)) return 1;
            board[i][col] = 0;
        }
    }
    return 0;
}

int main() {
    int n; printf("Enter N: "); scanf("%d", &n);
    int board[10][10] = {0};
    if(solveNQ(board, 0, n)) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) printf("%d ", board[i][j]);
            printf("\n");
        }
    } else printf("No solution\n");
    return 0;
}
```

---

Let me know if you'd like any code explained or shortened further!
