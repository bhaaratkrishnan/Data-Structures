struct node * merge_sorted_ll(struct node * l1, struct node * l2){
    struct node * rl = NULL;
    //Base Condition
    if(l1==NULL) return l2;
    else if(l2==NULL) return l1;
    //Merging
    if(l1->data < l2->data){
        rl = l1;
        rl->link = merge_sorted_ll(l1->link,l2);
    }else{
        rl = l2;
        rl->link = merge_sorted_ll(l1, l2->link);
    }
    return rl;
}
