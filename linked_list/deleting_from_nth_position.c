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
void delete_node(int n){
    struct node*temp1 = head;
    if(n==1){
        //If the given node is head node
        head = temp1->link;
        free(temp1);
        return;
    }
    for(int i=0; i<n-2; i++){
        temp1 = temp1->link;
    }
    struct node* temp2 = temp1->link;//getting the nth node
    temp1->link = temp2->link;//assigning the n+1 node's address to n-1
    free(temp2);//deleting the nth node from memory location
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
    printf("Enter node to delete : ");scanf("%d",&n);
    delete_node(n);
    print_ll();
    return 0;
}
