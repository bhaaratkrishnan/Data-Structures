#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node * prev;
};
struct node * head = NULL;
struct node * find(int x){
    struct node * temp = head;
    while(temp!=NULL && temp->data!=x){
        temp = temp->next;
    }
    return temp;
}
void insert_at_head(int x){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->prev = NULL;
    temp->next = head;
    head = temp;
}
void insert_at_end(int x){
    if(head==NULL){
        insert_at_head(x);
        return;
    }
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    struct node * temp_end = head;
    while(temp_end->next!=NULL){
        temp_end = temp_end->next;
    }
    temp->data = x;
    temp_end->next = temp;
    temp->prev = temp_end;
    temp->next = NULL;
}
void insert(int x, struct node * pos){
    if(pos==NULL) return;
    if(pos->prev==NULL){
        insert_at_head(x);
        return;
    }
    struct node * temp2 = pos->prev;
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = temp2->next;
    temp2->next->prev = temp;
    temp2->next = temp;
    temp->prev = temp2;
    return;
}
void display(){
    struct node * temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void main(){
    insert_at_head(1);display();
    insert_at_head(2);display();
    insert_at_end(3);display();
    insert_at_end(4);display();
    insert_at_end(5);display();
    insert(3, find(2));display();
}
