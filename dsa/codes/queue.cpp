#include <stdio.h>
char red[]="\e[1;31m", white[]="\e[0;37m", lime[]="\e[1;92m", cyan[] = "\e[1;36m";  //these are some colors j4f
// [2,4,5,3,2]
//  <-<-<-<-<-
struct Queue{
    int arr[100];
    int size=5;
    int sn=0;
    int last=0;

    void enqueue(int num){
        if(last>=size){printf("%sQueue is Full%s\n", red, white);}
        else{
            arr[last]=num;
            last++;
            sn++;
        }
    }
    void  dequeue(){
        if(last<=0){printf("%sQueue is Empty%s\n", red,white);}
        else{
            for(int i=0; i<last-1; i++){
                arr[i] = arr[i+1];
            }
            last--;
            sn--;
        }
    }
};

int main(){
    struct Queue queue;
    int x, num;
    while(1>0){
        printf("%sEnter 1 for enqueue\nEnter 2 for dequeue\nEnter 3 for Exit.\n: ", white);
        scanf("%d", &x);
        if(x==1){
            printf("%sEnter value : ", lime);
            scanf("%d", &num);
            queue.enqueue(num);
            printf("%sQueue :[",cyan);
            for(int i=0; i<queue.sn; i++){printf("%d,", queue.arr[i]);}
            printf("]\n%s",white);
        }
        else if(x==2){
            queue.dequeue();
            printf("%sQueue :[",cyan);
            for(int i=0; i<queue.sn; i++){printf("%d,", queue.arr[i]);}
            printf("]%s\n", white);
        }
        else{break;}
        
    }
}
