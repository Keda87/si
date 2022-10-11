#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printNodes(struct Node* x) {
    while (x != NULL) {
        printf("value: %d\n", x->data);
        x = x->next;
    }
}

void insert(struct Node* x, int val) {
    if (x->next == NULL) {
        struct Node* next = NULL;
        next = (struct Node*) malloc(sizeof(struct Node));
        next->data = val;

        x->next = next;
    } else {
        insert(x->next, val);
    }
}

void deleteLast(struct Node* x) {
    while (x->next->next != NULL) {
        x = x->next;
    }
    
    x->next = NULL;
}


int main(void) {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 12;
    third->next = NULL;

    printf("\nbefore insert:\n");
    printNodes(head);

    printf("\nafter insert:\n");
    insert(head, 32);
    insert(head, 77);
    insert(head, 95);
    printNodes(head);

    printf("\nafter delete:\n");
    deleteLast(head);
    printNodes(head);

    free(head);
    free(second);
    free(third);

    return EXIT_SUCCESS;
}
