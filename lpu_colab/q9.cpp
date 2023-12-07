#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int precedence(char op){
    if(op == '+' || op == '-'){
        return 1;
    }else if(op == '*' || op == '/'){
        return 2;
    }
    return 0;
}

string infixToPostfix(string expression){
    stack<char> operatorStack;
    string postfix;

    for(char c : expression){
        if(isalnum(c)){
            postfix += c;
        }else if(c == '('){
            operatorStack.push(c);
        }else if(c== ')'){
            while(!operatorStack.empty() && operatorStack.top() !='('){
                postfix+=operatorStack.top();
                operatorStack.pop();
            }
            
        }
    }
}

int main(){
    
}