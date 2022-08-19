#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* head;
//Insert into nth position
void insert(int data, int n){
    struct node * temp1 = (struct node*)malloc(sizeof(struct node));
    (*temp1).data = data;
    (*temp1).link = NULL;
    if(n==1){
        //If we have to insert at start of the link
        temp1->link= head;
        head = temp1;
        return;
    }
    struct node * temp2 = head;
    for(int i=0; i<n-2;i++){
        temp2 = temp2->link;
    }
    temp1->link=temp2->link;
    temp2->link = temp1;
}
void print_ll(){
    struct node*temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->link;
    }

}
int main(){
    head = NULL; //empty list
    insert(10,1);
    insert(20,2);
    insert(30,3);
    insert(40,4);
    insert(50,3)
    print_ll();
    return 0;
}
