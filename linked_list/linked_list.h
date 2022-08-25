#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

struct node{
    int data;
    struct node * link;
};
void insert_at_head(struct node ** head, int x){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Memory not Available\n");
    }
    else{
        temp->data = x;
        temp->link = *head;
        *head = temp;
        printf("Node Inserted at head\n");
    }
}
void insert_at_end(struct node ** head, int x){
   struct node * temp = (struct node*)malloc(sizeof(struct node));
   if(temp==NULL){
        printf("Memory not available\n");
   }else{
       temp->data=x;
       if(*head==NULL){
           temp->link=*head;
           *head=temp;
           printf("Node Inserted at end\n");
           return;
       }
       struct node * temp_head = *head;
       while(temp_head->link!=NULL){
            temp_head = temp_head->link;
       }
       temp_head->link = temp;
       temp->link=NULL;
       printf("Node Inserted at end\n");
   }
}
void insert_at_nth(struct node ** head, int x, int pos){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Memory Not Available\n");
        return;
    }
    temp->data = x;
    temp->link = NULL;
    if(pos==1){
        temp->link = *head;
        *head = temp;
        return;
    }
    struct node * temp_head = *head;
    for(int i=0; i<pos-2; i++){
        temp_head = temp_head->link;
    }
    temp->link = temp_head->link;
    temp_head->link = temp;
    printf("Node inserted in %d position\n",pos);

}
void delete_at_head(struct node ** head){
    struct node * temp = *head;
    if(temp==NULL){
        printf("Linked List is empty\n");
        return;
    }
    *head = temp->link;
    free(temp);
}
void delete_at_end(struct node ** head){
    struct node * temp = *head;
    if(temp==NULL){
        printf("Linked List is Empty\n");
        return;
    }
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
    free(temp->link);
    temp->link = NULL;

}
void delete_at_nth(struct node ** head, int pos){
    struct node * temp = *head;
    if(pos==1){
        *head=temp->link;
        free(temp);
        return;
    }
    for(int i=0; i<pos-2; i++){
        temp = temp->link;
    }
    struct node * temp2 = temp->link;
    temp->link = temp2->link;
    free(temp2);
    printf("Node Deleted\n");
}
void print_linked_list(struct node * head){
    struct node * temp = head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->link;
    }
    printf("NULL\n");
}
#endif // LINKED_LIST_H_INCLUDED
