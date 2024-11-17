# Double-Ended Queue (Deque)

A Double-Ended Queue, or deque (pronounced "deck"), is a data structure that allows insertion and deletion of elements from both the front and the back of the queue. It is similar to a queue, but it supports insertion and deletion from both ends, making it more versatile.

## Operations

1. **enqueue_front(x):** Insert element `x` at the front of the deque.
2. **enqueue_rear(x):** Insert element `x` at the back of the deque.
3. **dequeue_front():** Delete the element at the front of the deque.
4. **dequeue_rear():** Delete the element at the back of the deque.


## Code Example (C)

```c
#include <stdio.h>
// All Done

int queue[100], n, f = 0, r = -1, x, num;

int enqueue_front(int num) {
    if (f == 0) {printf("Enqueue at front not possible! F==0\n");return 0;}
    else if(f>r){f--; queue[f]=num; return 1;}
    else { queue[f] = num; f--; return 1;}
}

int enqueue_rear(int num) {
    if (r == n - 1) {printf("Enqueue at rear not possible! R==n-1 \n");return 0;} 
    else {r++; queue[r] = num; return 1;}
}

int dequeue_front() {
    if (f > r) {printf("Dequeue at front not possible! Queue is empty\n");return 0;} 
    else {f++;return 1;}
}

int dequeue_rear() {
    if (f > r) {printf("Dequeue at rear not possible! Queue is empty\n");return 0;} 
    else {r--;return 1;}
}

int main() {
    printf("Enter the size of the queue: ");
    scanf("%d", &n);
    int choice;
    while (1) {
        printf("Enter 1 for enqueue\nEnter 2 for dequeue\nEnter 3 for Exit.\n");
        scanf("%d", &choice);
        if (choice == 1) {
            int cenqueue;
            printf("Enter 1 for enqueue at front\nEnter 2 for enqueue at rear\n");
            scanf("%d", &cenqueue);

            if (cenqueue == 1) {
                printf("Enter the value: ");
                scanf("%d", &num);
                enqueue_front(num);} 

            else if (cenqueue == 2) {
                printf("Enter the value: ");
                scanf("%d", &num);
                enqueue_rear(num);}} 

        else if (choice == 2) {
            int cdequeue;
            printf("Enter 1 for dequeue at front\nEnter 2 for dequeue at rear\n");
            scanf("%d", &cdequeue);

            if (cdequeue == 1) {dequeue_front();} 
            else if (cdequeue == 2) {dequeue_rear();}} 

        else { break;}

        printf("Queue: ");
        for (int i = f; i <=r; i++) {printf("%d ", queue[i]);}
        printf("\nFront : %d Rear : %d", f, r);
        printf("\n");
    }
    return 0;
}
```

