//Reversing a string in C using an array implementation of stack 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(char c);
void pop();
const char *reverse(char * c);
char buffer[101];
int top = -1;

int main() {
 char string[] = "Hello everyone!";
 printf("%c\n",string[1]);
 reverse(string);
}

void pop(){
    top = --top;
}

void push(char c) {
    top = ++top;
    buffer[top] = c;
}

const char *reverse(char *c) {
    for (size_t i = 0; i < strlen(c); i++)
    {
        push(c[i]);
    }
    for (size_t i = 0; i < strlen(c); i++)
    {
      c[i] = buffer[top];
      pop();  
    }
    printf(c);
    return c;
}

