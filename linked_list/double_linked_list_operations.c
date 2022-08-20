#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head; //Global variable - pointer to head node.
struct node* create_new_node(int x){//Creates a new node with given data and returns its pointer
    struct node * new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=NULL;
    new_node->prev=NULL;
    return new_node;//Pointer returned
}
void insert_at_head(int x){
    struct node* temp = create_new_node(x);
    if(head==NULL){//If the linked list is empty
        head = temp;//Setting new node is head
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}
void insert_at_tail(int x){
    struct node * temp = create_new_node(x);
    if(head==NULL){//If linked list is empty
        head = temp;
        return;
    }
    struct node * tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next=temp;
    temp->prev= tail;
    return;
}
void print_ll(){
    struct node* temp = head;
    printf("forward printing : \n");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void print_ll_reverse(){
    //Optional
    struct node* temp = head;
    //Goes to the end of the linked list
    while(temp->next!=NULL){
            temp=temp->next;
    }
    printf("Backward printing : \n");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
int main()
{
    insert_at_head(1);print_ll();
    insert_at_head(2);print_ll();
    insert_at_head(3);print_ll();
    insert_at_head(4);print_ll();
    insert_at_tail(2);print_ll();
    print_ll_reverse();
    return 0;
}
