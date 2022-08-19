#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* head; //Global variable declared for head
//Inserting node at beginning of the listed link
void insert_ll(int x){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    (*temp).data = x;
    (*temp).link = head;
    head = temp;
}
void print_ll(){
    struct node*temp = head;
    while(temp!=NULL){
        printf("%d -> ",(*temp).data);
        temp = (*temp).link;
    }
    printf("\n");
}
int main()
{
    head = NULL;
    int n,x;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter number : ");scanf("%d",&x);
        insert_ll(x);
        print_ll();
    }
}
