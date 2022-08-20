#include <iostream>
#include <string.h>
#include<stack>
using namespace std;
struct node{
    int data;
    node* link;
};
struct node * head;
void insert_into_ll(int x){
    struct node*temp = (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=head;
    head=temp;
}
void print_ll(){
    struct node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
void reverse_linked_list(){
    if (head==NULL) return;

    stack <struct node*> S;
    struct node* temp = head;
    while(temp!=NULL){
        S.push(temp);
        temp=temp->link;
    }
    temp = S.top();
    head=temp;
    S.pop();
    while(!S.empty()){
        temp->link=S.top();
        S.pop();
        temp=temp->link;
    }
    temp->link=NULL;
}
int main()
{
    head=NULL;
    insert_into_ll(1);
    insert_into_ll(2);
    insert_into_ll(3);
    print_ll();
    reverse_linked_list();
    print_ll();
    return 0;
}
