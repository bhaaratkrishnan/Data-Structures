#include <iostream>
#include <string.h>
#include<stack>
using namespace std;
void Reverse(char *str, int n){
    stack<char> S;
    for(int i=0; i<n; i++){
        S.push(str[i]);
    }
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
