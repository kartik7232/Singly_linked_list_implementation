#ifndef LIST_H
#include LIST_H

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* create_node(int data);
Node* insert(Node* head, int data);
void display(Node* head);
void free(Node* head);

#endif
