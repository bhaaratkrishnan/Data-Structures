#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* head;
//Reversing linked list using recursion
void reverse_ll_recursion(struct node* ptr){
    if(ptr->link==NULL){
        head = ptr;
        return;
    }
    reverse_ll_recursion(ptr->link);
    struct node* ptr2 = ptr->link;
    ptr2->link = ptr;
    ptr->link = NULL;
}
//Insert into beginning
void insert(int data){
    struct node * temp1 = (struct node*)malloc(sizeof(struct node));
    (*temp1).data = data;
    (*temp1).link = head;
    head =  temp1;
}
//Printing linked list using recursion
void print_ll(struct node* ptr){
    if(ptr==NULL) return;
    printf("%d ",ptr->data);
    print_ll(ptr->link);

}
int main(){
    head = NULL; //empty list
    insert(1);//[1]
    insert(2);//[2,1]
    insert(3);//[3,2,1]
    insert(4);//[4,3,2,1]
    insert(5);//[5,4,3,2,1]
    print_ll(head);//Original Linked List
    printf("\n");    
    reverse_ll_recursion(head);
    print_ll(head);//Reversing Linked List
    return 0;
}
