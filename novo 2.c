#include <stdio.h>

#include <stdlib.h>

typedef struct Node {

    int data;
    struct Node *prev;
    struct Node *next;
} Node

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(Node **head, int data) {
    Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
    
}
void printList(Node *head) {
    printf("Lista (do incio ao fim): ");
    while (head != NULL) {
        printf("%d -> ", head_>data);
        head = head->next;
    }
    printf("NULL\n"):
    
    printf("Lista (do fim ao inicio): ");
    while (head->prev !=NULL) {
        printf("%d -> ", head->data);
        head = head->prev;
    }
    printf("NULL\n");
    
}
int main() {
    Node *head = NULL;

    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);

    printList(head);

    return 0;
}