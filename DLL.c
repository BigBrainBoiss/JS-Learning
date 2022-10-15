//Double Linked list: Having the pointers to both the previous and next node.
#include <stdio.h>
#include <stdlib.h>

struct num {
    int num;
    struct num *next;
    struct num *prev;
};
struct num *head;

struct num* GetNewNode(int x);
void InsertAtHead (int x);
void InsertAtTail (int x);
void Insert(int x, int index);
void delete(int index);
void Print();

int main() {
    head = NULL;
    return 0;
}

struct num* GetNewNode(int x) {
    struct num* newNode = (struct num*)malloc(sizeof(struct num));
    newNode->num = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void InsertAtHead (int x) {
    struct num* newNode = GetNewNode(x);
    if (head == NULL) {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
    return;
}

void InsertAtTail(int x){
    struct num* newNode = GetNewNode(x);
    struct num* marker = head;
    while (marker->next != NULL) {
        marker = marker->next;
    }
    newNode->next = NULL;
    marker->next = newNode;
    newNode->prev = marker;
    return;
}

void Insert(int x, int index) {
    struct num* newNode = GetNewNode(x);
    struct num* marker = head;
    if(index == 1) {
        InsertAtHead(x);
        return;
    }
    for (size_t i = 0; i < index-2; i++)
    {
        marker = marker->next;
    }
    struct num* marker2 = marker->next;
    newNode->next = marker2;
    newNode->prev = marker;
    marker->next = newNode;
    marker2->prev = newNode;
}

void Print() {
    struct num* marker = head;
    while (marker != NULL) {
        printf("%d ", marker->num);
        marker = marker->next;
    }
    print("\n");
}

void delete(int index) {
    struct num* marker = head;
    for (size_t i = 0; i < index-2; i++)
    {
        marker = marker->next;
    }
    struct num* marker2 = marker->next;
    marker->next = marker2->next;
    marker2->next->prev = marker;
    free(marker2);
}