// C program to check if parentheses are balanced
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Check if characters match
bool checkMatch(char c1, char c2){
    if (c1 == '(' && c2 == ')') return true;
    if (c1 == '[' && c2 == ']') return true;
    if (c1 == '{' && c2 == '}') return true;
    return false;
}

// Check if parentheses are balanced
bool isBalanced(char s[]){
  
    // Initialize top as -1 (empty stack simulation)
    int top = -1;
    for (int i=0; i < strlen(s); ++i){
      
        // Push char if stack is empty or no match
        if (top < 0 || !checkMatch(s[top], s[i])){
            ++top;
            s[top] = s[i];
        }
        else{
          
            // Pop from stack if match found
            --top;
        }
        printf("Inside loop top is %d i is %d\n", top, i);
    }
    printf("top is %d \n", top);
    // Return true if stack is empty (balanced)
    return top == -1;
}

int main(){
    char s[] = "{([])}";
    int ret_val=0;
    ret_val = isBalanced(s);
    printf("ret_val:%d %s\n", ret_val, ret_val ? "True" : "False");
    return 0;
}
