#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Function to insert at end
void insertEnd(int value) {

    struct Node *newNode, *temp;

    // Allocate memory
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if(head == NULL) {
        head = newNode;
    }
    else {

        temp = head;

        // Traverse till last node
        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

// Function to display list
void display() {

    struct Node *temp = head;

    if(head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List Elements:\n");

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {

    int n, i, value;

    printf("Enter number of job IDs: ");
    scanf("%d", &n);

    // Insert elements
    for(i = 0; i < n; i++) {

        printf("Enter job ID: ");
        scanf("%d", &value);

        insertEnd(value);
    }

    // Display list
    display();

    return 0;
}