#include <iostream>
#include <stack>
using namespace std;
int char_value(char c){
    if(c=='^'){return 3;}
    else if(c=='/' || c=='*'){return 2;}
    else if(c=='+' || c=='-'){return 1;}
    else{return -1;}
}
void infixToPostfix(string str){
    stack <char> s;
    string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(iswalnum(c)){
            result+=c;
        }else if(c=='('){
            s.push(c);
        }else if(c==')'){
            while(s.top()!='('){
                result += s.top();
                s.pop();
            }
            s.pop();
        }else{
            while(!s.empty() && char_value(c)<=char_value(s.top())){
                if(s.top()=='^' && c=='^'){
                    break;
                }else{
                    result+=s.top();
                    s.pop();
                }
            }
            s.push(c);
        }
    }
    while(!s.empty()){
        result+=s.top();
        s.pop();
    }
    cout << result << endl;
}
int main()
{
    infixToPostfix("a+b*(c^d-e)^(f+g*h)-i");
    return 0;
}
