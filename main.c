#include <stdio.h>
#include "list.h"

int main() {
    Node* head = NULL;

    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);

    printf("Linked list: ");
    display(head);

    free_list(head);
    head = NULL;
    return 0;
}
