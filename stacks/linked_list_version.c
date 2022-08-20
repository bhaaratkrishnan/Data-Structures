#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 101
struct node {
    int data;
    struct node * link;
};
struct node* top =NULL;
void push(int x){
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=top;
    top=temp;
}
void pop(){
    if(top==NULL){
        printf("Stack is empty\n");
        return;
    }
    struct node* temp;
    temp = top;
    top = top->link;
    free(temp);
}
void print_stack(){
    struct node* temp = top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->link;
    }
    printf("\n");
}
int main(){
    pop();print_stack();
    push(1);print_stack();
    push(2);print_stack();
    push(3);print_stack();
    pop();print_stack();
    return 0;
}
