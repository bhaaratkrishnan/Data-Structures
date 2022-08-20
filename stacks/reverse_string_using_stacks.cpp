#include <iostream>
#include <string.h>
#include<stack>//Importing stack data structure from C++ built in library 
using namespace std;
void Reverse(char *str, int n){
    stack<char> S;//Defining a stack
    //Pushing elements into stack
    for(int i=0; i<n; i++){
        S.push(str[i]);
    }
    //Popping a element from a stack to the string in reverse order
    //as stack is Last in first out data structure(LIFO)
    for(int i=0; i<n; i++){
        str[i]=S.top();
        S.pop();
    }
}
int main()
{
    char str[51];
    printf("Enter a string : ");
    gets(str);
    Reverse(str, strlen(str));
    printf("Output : %s",str);
    return 0;
}
