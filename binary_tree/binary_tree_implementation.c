#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct BstNode{
    int data;
    struct BstNode * left;
    struct BstNode * right;
};
struct BstNode * create_node(int x){
    struct BstNode * temp = (struct BstNode *)malloc(sizeof(struct BstNode));
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
};

struct BstNode * insert_binary_tree(struct BstNode * root, int x){
     if(root==NULL){
        root=create_node(x);
     }else if(x <= root->data){
         root->left = insert_binary_tree(root->left, x);
     }else{
         root->right = insert_binary_tree(root->right,x);
     }
    return root;
}
bool search_bst(struct BstNode * root, int x){
    if(root==NULL) return false;
    else if(root->data == x) return true;
    else if(x <= root->data) return search_bst(root->left,x);
    else return search_bst(root->right,x);
}
int main()
{
    struct BstNode * b1 = NULL;
    b1 = insert_binary_tree(b1,10);
    b1 = insert_binary_tree(b1,5);
    b1 = insert_binary_tree(b1, 15);
    printf("%d",b1->right->data);
    if(search_bst(b1, 10)) printf("true");
    return 0;
}
