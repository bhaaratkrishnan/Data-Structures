struct node * reverse_with_k(struct node*head, int k){
    if(head==NULL){
        return;
    }
    struct node *current, *next, *prev;
    current = head;
    prev=next=NULL;
    int count = 0;
    while(current!=NULL && count<k){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
        count++;
    }
    if (next!=NULL){
        head->link = reverse_with_k(next,k);
    }
    return prev;
}
