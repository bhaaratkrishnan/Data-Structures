#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * link;
};
struct Queue{
    struct Node * head;
    struct Node * tail;
};
struct Queue create_queue(){
    struct Queue q;
    q.head=q.tail=NULL;
    return q;
}
int queue_is_empty(struct Queue q){
    if(q.head==NULL && q.tail==NULL){
        return 1;//True
    }
    return 0;//False
}
struct Node * front(struct Queue q){
    return q.head;
};
struct Node * rear(struct Queue q){
    return q.tail;
};
void enqueue(struct Queue * q, int x){
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link=NULL;
    if(queue_is_empty(*q)){
        //Queue is empty
        q->head = q->tail = temp;
        return;
    }
    q->tail->link = temp;
    q->tail = temp;
}
void dequeue(struct Queue * q){
    if(queue_is_empty(*q)){
        //queue is empty
        return;
    }
    if(q->head==q->tail){
        //Only one element in queue
        q->head=q->tail=NULL;
        return;
    }
    struct Node * temp = q->head;
    q->head = temp->link;
    free(temp);
}
void display_queue(struct Queue q){
    struct Node * temp = q.head;
    while(temp!=NULL){
        printf("%d | ",temp->data);
        temp=temp->link;
    }
    printf("NULL\n");
}
int main()
{
    struct Queue q1 = create_queue();
    enqueue(&q1,10);
    enqueue(&q1, 20);
    enqueue(&q1, 30);
    display_queue(q1);
    dequeue(&q1);
    return 0;
}
