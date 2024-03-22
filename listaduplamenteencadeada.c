#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da lista
typedef struct Node {
    int data;           // Armazena o dado do nó
    struct Node *prev;  // Ponteiro para o nó anterior na lista
    struct Node *next;  // Ponteiro para o próximo nó na lista
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node)); // Aloca memória para o novo nó
    if (newNode == NULL) { // Verifica se a alocação de memória foi bem-sucedida
        printf("Erro: Não foi possível alocar memória.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data; // Define o dado do novo nó
    newNode->prev = NULL; // Inicializa o ponteiro para o nó anterior como NULL
    newNode->next = NULL; // Inicializa o ponteiro para o próximo nó como NULL
    return newNode; // Retorna o endereço do novo nó criado
}

// Função para inserir um novo nó no final da lista
void insert(Node **head, int data) {
    Node *newNode = createNode(data); // Cria um novo nó com o dado especificado
    if (*head == NULL) { // Se a lista estiver vazia
        *head = newNode; // O novo nó se torna o primeiro nó da lista
    } else {
        Node *temp = *head; // Cria um nó temporário para percorrer a lista
        while (temp->next != NULL) { // Enquanto não chegar ao final da lista
            temp = temp->next; // Avança para o próximo nó
        }
        temp->next = newNode; // Insere o novo nó no final da lista
        newNode->prev = temp; // Atualiza o ponteiro para o nó anterior do novo nó
    }
}

// Função para imprimir os elementos da lista
void printList(Node *head) {
    Node *temp = head; // Cria um nó temporário para percorrer a lista
    printf("Lista: ");
    while (temp != NULL) { // Enquanto não chegar ao final da lista
        printf("%d ", temp->data); // Imprime o dado do nó atual
        temp = temp->next; // Avança para o próximo nó
    }
    printf("\n");
}

int main() {
    Node *head = NULL; // Cria uma lista vazia, então o ponteiro para o primeiro nó é NULL

    // Inserindo elementos na lista
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);

    // Imprimindo os elementos da lista
    printList(head);

    return 0;
}