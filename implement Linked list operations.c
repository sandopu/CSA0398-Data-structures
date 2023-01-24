#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head; // global variable, can be accessed anywhere

// Creating a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Inserting a new node at the front
void insertAtFront(int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
}

// Inserting a new node at the end
void insertAtEnd(int value) {
    struct Node* newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Deleting a node with a given value
void deleteNode(int value) {
    struct Node* temp = head;
    struct Node* prev;
    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        return;
    }
    prev->next = temp->next;
    free(temp);
}

// Printing the linked list
void printList() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    head = NULL; // Initially, the list is empty
    insertAtFront(2);
    insertAtFront(3);
    insertAtEnd(1);
    insertAtEnd(4);
    printList();
    deleteNode(3);
    printList();
    return 0;
}

