#include <stdio.h>
#include <stdlib.h>
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
            current = newNode; }
        else{
            current->next = newNode; 
            current = newNode;}
    }
    while(true){
        current = head;
        if(!head){return printf("linked List Cleared\n");}
        printf("\nElements : ");
        while (current) {
            printf("%d ", current->data);
            current = current->next;}

        current = head;
        printf("\nEnter where to delete : ");
        int pos=0, count=1;
        scanf("%d", &pos);

        if(pos==1){
            Node* temp = head;
            head = head->next;
            free(temp);
        }

        current = head;
        while(current != NULL){
            if(count==pos-1){
                if(!current->next){return printf("Out of index..!");}
                Node* now=current;
                Node* temp = current->next;
                now->next = temp->next;
                free(temp);}
            current = current->next;count++;}

        if(pos>count or pos < 1){return printf("Out of index...!\n");}

        current = head;
        printf("\nElements : ");
        while (current){
            printf("%d ", current->data);
            current = current->next;}}
    return 0;
}