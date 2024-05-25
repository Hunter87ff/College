#include <stdio.h>
// #include <stdlib.h>


struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    Node* current = NULL; 

    for (int i = 0; i < 5; i++) {
        Node* newNode = new Node;
        newNode->data = i;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode; 
            current = newNode; 
        }else{
            current->next = newNode; 
            current = newNode;
        }
    }

    current = head;
    printf("\nElements : ");
    while (current) {
        printf("%d ", current->data);
        current = current->next;}

    current = head;
    printf("\nEnter where to insert : ");
    int pos=0, count=0;
    scanf("%d", &pos);

    while(current != NULL){
        if(count==pos-2){
            Node* newNode = new Node;
            printf("Enter value : ");
            scanf("%d", &newNode->data);
            Node* temp = current->next;
            current->next = newNode;
            newNode->next = temp;}
        current = current->next;count++;
    }

    current = head;
    printf("\nElements : ");
    while (current){
        printf("%d ", current->data);
        current = current->next;}

    return 0;
}
