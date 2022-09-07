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
int Pop(){
    if(top==-1){
        printf("Error no element to pop\n");
        return;
    }
    top--;
    return arr[top+1];
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
    printf("Stack Operation : \n");
    int c,x;
    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Top\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter Option : ");scanf("%d",&c);
        if(c==1){
            printf("Enter element : ");scanf("%d",&x);
            Push(x);
        }else if(c==2){
            printf("Pop of the stack : %d\n",Pop());
        }else if(c==3){
            printf("Top of the stack : %d\n",Top());
        }else if(c==4){
            printf("Stack \n");print_stack();
        }else{
            break;
        }
    }
    return 0;
}
