#include <stdio.h>
#include <conio.h>
    
void insertion(){
        int arr[100], size, n;
        printf("Enter the size :");
        scanf("%d", &size);
        for(int i=0; i<size; i++){
            printf("Enter number : ");
            scanf("%d", &arr[i]);
        }
        printf("Enter the index : ");
        scanf("%d", &n);
        for(int i=size-1; i>=n; i--){
            arr[i+1] = arr[i];
        }
        printf("Enter the value : ");
        scanf("%d",&arr[n]);
        
        for(int i=0; i<=size; i++){
            printf
            ("%d", arr[i]);
        }
}

void deletion(){
    int size, n;
    printf("Enter the size :");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter number : ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the index to delete : ");
    scanf("%d", &n);
    for(int i=n; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    for(int i=0; i<size-1; i++){
        printf("%d", arr[i]);
    }
}

int main(){
    int c;
    printf("Enter 1 for insertion\nEnter 2 for deletion\n");
    scanf("%d", &c);
    if(c==1){insertion();}
    else if(c==2){deletion();}
    else{printf("Enter a valid choice");}
    getch();
    return 0;
}
