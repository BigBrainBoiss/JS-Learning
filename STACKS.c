//STACKS
//Stacks(Last In First Out): List where  insertion and deletion can be performed only from one end, called the top. Last thing inserted is the first taken out
//Operation: Push(Insertion), Pop(Deletion),Top(returns last element inserted), IsEmpty(checks if stack has anything)

#include <stdlib.h>
#include <stdio.h>

struct stack
{
    int data;
    struct stack *next;
};
    struct stack *head;
    

void pop();
void push(x);
const char *IsEmpty();
void Top();
struct stack* getNewNode(int x);
void print();

int main() {
    head = NULL;
    push(3);
    push(32);
    push(46);
    print();
    pop();
    print();
    Top();
    pop();
    pop();
    printf("%s\n",IsEmpty());
    return 0;
}

struct stack* getNewNode(int x) {
    struct stack* newNode = (struct stack*)malloc(sizeof(struct stack));
    newNode->next = NULL;
    newNode->data = x;
    return newNode;
}

void push(int x) {
    struct stack* newNode = getNewNode(x);
    newNode->next = head;
    head = newNode;
    return;
}

void pop(){
    struct stack* first = head;
    if (head == NULL) {
        return;
    }
    head = head->next;
    free(first);
    return;
}

void Top() {
    if (head != NULL)
        printf("%d", head->data);
        puts("\n");
        return;
}

const char *IsEmpty() {
    if (head == NULL) {
        return "True";
    } else {
        return "False";
    }
}

void print() {
    struct stack *top = head;
    while(top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    puts("\n");
    return;
};