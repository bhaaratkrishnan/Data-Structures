void swap_nodes(struct Node ** head, int x, int y){
    if(x==y) return;
    struct node* xnode, *ynode, *prex, *prey, *temp;
    xnode = ynode = *head;
    prex = prey = NULL;
    //Searching X
    while(xnode!=NULL && xnode->data!=x){
        prex = xnode;
        xnode = xnode->link;
    }
    //Searching Y
    while(ynode!= NULL && ynode->data!=y){
        prey = ynode;
        ynode = ynode->link;
    }
    if(xnode==NULL || ynode==NULL) return;

    if(prex!=NULL){
        //x is not head
        prex->link = ynode;
    }else{
        //x is head
        *head = ynode;
    }
    if(prey!=NULL){
        //y is not head
        prey->link = xnode;
    }else{
        //y is head
        *head = xnode;
    }
    //swapping links
    temp = ynode->link;
    ynode->link = xnode->link;
    xnode->link = temp;

}
void main(){
    struct node * list = create_linked_list();
    insert_at_head(&list,10);
    insert_at_head(&list,20);
    insert_at_head(&list,30);
    insert_at_head(&list,40);
    insert_at_head(&list,50);
    insert_at_head(&list,60);
    print_linked_list(list);
    swap_nodes(&list,60,30);
    print_linked_list(list);

}
