#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
//Global variable declared for head
struct node* head;
//Printing linked list using recursion
void print_ll(struct node* ptr){
    if(ptr==NULL) return;
    printf("%d ",ptr->data);
    print_ll(ptr->link);

}
void print_ll_reverse(struct node* ptr){
    if(ptr==NULL){return;}
    print_ll_reverse(ptr->link);
    printf("%d ",ptr->data);
}
//Inserting data at beginning of the linked list
void insert(int data){
    struct node * temp1 = (struct node*)malloc(sizeof(struct node));
    (*temp1).data = data;
    (*temp1).link = head;
    head =  temp1;
}
int main(){
    head = NULL; //empty list
    int n;
    insert(1);//Inserting some elements
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print_ll(head);
    printf("\n");
    print_ll_reverse(head);
    return 0;
}
