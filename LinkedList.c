//Linked List: A data structre similar to an array.
// Listed lists have an insertion point, the head, which allows the user to traverset the linked list through pointers.
//This makes linked list fragmented across memory instead of a block of memory unlike arrays.

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Definition of structure8 */
struct numNode {
    int num;
    struct numNode *link;
};

/*Declaration of head node */
struct numNode *head;

/*Function prototypes*/
void insert(int data);
void print();
void delete(int index);
void reverse();

/*Main program*/
int main (){
    int n,num,index;
    char c;
    head = NULL;
    printf("Enter the length of the linked list.");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        insert(num);
        print();
    }

    puts("Do you want to enter delete mode? [Y/n]");
    scanf("%c", &c);
    scanf("%c",&c);
    if (c == 'y'|| c == 'Y') {
        while (c == 'y'|| c == 'Y'){
            puts("\nLinked List:");
            print();
            puts("\nEnter index to delete in linked list:");
            scanf("%d", &index);
            delete(index);
            puts("\nLinked List:");
            print();
            scanf("%c", &c);
            puts("\nContinue? [Y/n]");
            scanf("%c", &c);
        }
        
    } 
    puts("Printing Linked List:");
    print();
    puts("Printing Reversed Linked List:");
    reverse();
    return 0;
}

void insert (int data) {
    struct numNode *new;
    new = (struct numNode*)malloc(sizeof(struct numNode)); 
    new -> num = data;
    new -> link = head;
    head = new;
    return;
}

void delete (int index) {
    struct numNode *temp = head;
    if (index == 1) {
        head = temp->link;
        free(temp);
        return;
    }
    for (int i = 0; i < index-2; i++) {
        temp = temp->link;
    }
    struct numNode *temp2 = temp->link;
    temp->link = temp2->link;
    free(temp2);
}

void print() {
    struct numNode *temp = head; 
    while (temp != NULL) {
        printf(" %d",temp->num);
        temp = temp ->link;
    }
    printf("\n");
}

void reverse() {
    struct numNode *temp,*prev,*next;
    temp = head;
    prev = NULL;
    while (temp != NULL)
    {   
        next = temp->link;
        temp->link = prev;
        prev = temp;
        temp = next;
    }
    head = prev;
    
    struct numNode *marker = head; 
    while (marker != NULL) {
        printf(" %d",marker->num);
        marker = marker->link;
    }
    printf("\n");
    
    //reversing a linked list using recursion
    //struct numNode *temp = head;  
}