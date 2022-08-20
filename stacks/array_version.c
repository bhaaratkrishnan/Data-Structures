#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 101
int arr[MAX_SIZE];
int top = -1;
void Push(int x){
    if(top==MAX_SIZE-1){
        printf("Error Stack Overflow\n");
        return;
    }
    arr[++top]=x;
}
void Pop(){
    if(top==-1){
        printf("Error no element to pop\n");
        return;
    }
    top--;
}
int Top(){
    return arr[top];
}
void print_stack(){
    for(int i=0; i<=top; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    Push(1);print_stack();
    Push(2);print_stack();
    printf("Top : ",Top());
    return 0;
}
