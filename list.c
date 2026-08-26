#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node* create_node(int data){
    Node* new_node = (Node*) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

Node* insert(Node* head, int data){
    Node* new_node = create_node(data);
    if(head == NULL){
        return new_node;
    }   
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = new_node;
    return head;
}

void display(Node* head){
    Node* temp = head;
    if(temp == NULL){
        printf("Empty List");
        exit(1);
    }

    while(temp!=NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void free(Node* head){
    Node* temp;
    while(head!=NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}