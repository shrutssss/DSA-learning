//Assignment: Implement C++ program for expression conversion to evaluate an infix to postfix using appropriate data structure
//considering the given constraints as below: 1. Operands and operators, both must be single characters. 2. Input
//Postfix expression must be in a desired format. 3. Only '+', '-', '*' and '/ ' operators are expected

//Data Structure : STACK


#include <iostream>
using namespace std;

class Stack{
    public:
    char stack_array[50];
    int top;
    char popped_element;
    int postfix_index= 0;
    Stack(){
        top = -1;
    }
    void push(char value){
        if(top == 49){
            cout<<"Stack overflow"<<endl;
            return;
        }
        stack_array[++top] = value;
    }
    char pop(){
        if(top == -1){
            cout<<"Stack underflow."<<endl;
            return '#';
        }
        return stack_array[top--];
    }
    bool full(){
        if(top == 49) return true;
        else return false;
    }
    bool isempty(){
        if(top == -1) return true;
        else return false;
    }
    private: 
    char infix[50];
    char postfix[50];
    public:
    void read(){
        cout<<"Enter infix expression: "<<endl;
        cin>>infix;
    }
    // int whitespace(char symbol){
    //     if(symbol== " " || symbol== "\t" || symbol== "\0") return 1;
    //     else return 0;
    // }
    int pred(char operator1){
        switch(operator1){
            case '^' : return 3;
            case '*' : case '/' : return 2;
            case '+' : case '-' : return 1;
            default: return 0;
        }
    }
    void infix_to_postfix(){
        for(int i = 0; infix[i] != '\0'; i++){
            switch(infix[i]){
                case '(': 
                if(!full()) push(infix[i]); break;
                case ')':
                while(!isempty() && (popped_element = pop()) != '('){
                    postfix[postfix_index++] = popped_element;
                }
                break;
                case '*': case '/': case '+': case '-':
                while(!isempty() && pred(infix[i]) <= pred(stack_array[top])){
                    postfix[postfix_index++] = infix[i];
                }
                push(infix[i]);
                break;
                default: 
                postfix[postfix_index++] = infix[i];
            }
        }
        while(!isempty()){
            postfix[postfix_index++] = pop();
        }
        postfix[postfix_index++] = '\0';
        cout<<postfix;
    }
};

int main(){
    Stack s;
    s.read();
    s.infix_to_postfix();
}