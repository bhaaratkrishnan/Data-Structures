#include <iostream>
#include <string.h>
#include<stack>
using namespace std;
int check_expression(char str[], int n){
    stack<char>S;
    for(int i=0; i<n; i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            S.push(str[i]);
       }else if(str[i]==')' || str[i]=='}' || str[i]==']'){
           if(S.empty()){
                return 0;
           }
           else{
                S.pop();
           }
       }
    }
    return S.empty()?1:0;
}
int main()
{
    char str[100];
    cout<<"Enter a expression : ";
    gets(str);
    int n = strlen(str);
    (check_expression(str, n)==1)?printf("expression is balanced"):printf("expression not balanced");
    return 0;
}
