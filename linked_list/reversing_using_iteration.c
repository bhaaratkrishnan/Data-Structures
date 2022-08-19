#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* head;
//Insert into beginning
void insert(int data){
    struct node * temp1 = (struct node*)malloc(sizeof(struct node));
    (*temp1).data = data;
    (*temp1).link = head;
    head =  temp1;
}
void reverse_ll(){
    struct node*current,*next, *prev;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next = current->link;
        current->link=prev;
        prev = current;
        current=next;
    }
    head=prev;
}
void print_ll(){
    struct node*temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}
int main(){
    head = NULL; //empty list
    int n;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print_ll();
    reverse_ll();
    print_ll();
    return 0;
}
