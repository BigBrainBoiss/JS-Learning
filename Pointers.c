/*************************************
 * Extension of CSIndex.c
 * Advanced Documentation of pointers 
 ************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

float convertToF(float c);
float convertToC(float f);
/*Declaration of pointers*/
int *ptr;//declares pointer (ptr) that can point to any type int variable

int main(void) {

    int myVar = 12; //myVar is of type int 
    ptr = &myVar; //assigns ptr contain the address of myVar. 
                  //ptr is now pointing to myVar
    int **ptr2ptr = &ptr; // declares a (pointer) to (pointer to type int)
                          // assigned to ptr. a pointer to type int
    printf("%d\n", **ptr2ptr); //prints out 12

    //**ptr2ptr vs *ptr2ptr: Multiple Indirection
    /* *ptr2ptr is going only one level deep. *ptr2ptr is equal to
    ptr (an address) while **ptr2ptr is equal to myVar (a number) */
    **ptr2ptr = 15; //modifying myVar
    *ptr2ptr; //accessing ptr(modifying ptr would result in pointing elsewhere)
    // Shows the relationship of variables, pointers, pointers to pointers, pointers to pointers to pointers etc.
    //The levels of indirection has no limit.



    //POINTERS AND ARRAYS
    //MultiDimensional arrays and multiple indirection in pointers are very similar.
    int multi [2][4] = {{1,2,3,4},
                        {5,6,7,8}};
    multi[0][0] = 10;
    printf("Memory Address of Multi = %u\n",multi);
    printf("Memory Address of Multi[0] = %u\n",multi[0]);
    printf("Memory Address of Multi[0][0] = %u\n",&multi[0][0]);
    /*multi without any brackets points to the first element in multi,
    which is multi[0]. The first element in multi is an array.That 
    array wihout brackets  points to ITS first element, multi[0][0]. 
    The element is itself. All of the printed addresses above are the 
    same because they (technically) are the same. They point to the 
    same address.
    */
    printf("Value of myVar = %d\n",myVar);
    printf("Value of *ptr2ptr = %d\n",*ptr);
    printf("Value of **ptr2ptr = %d\n",**ptr2ptr);
    //you can see the similarites 

    //Declaring a pointer variable that points to an element of a multi-dimensional arry.
    int (*mdPtr)[4];//points to an array of 4 elements type int
    int wrongPtr[4];//array of 4 pointers to type int 
    mdPtr = multi;
    printf("Memory Address of mdPtr is pointing to = %u\n",mdPtr);

    int *p; //pointer to type int
    p = (int *)mdPtr; // TYPECAST, changes variables data type
    //changes mdPtr to point to type int from pointing to an array of 4 elemnts so that it p points to the elements inside the array
    for (size_t i = 0; i < 8/*amount of integers in the array*/; i++)
    {
     printf("%d",*p++);/*pointing to multi. We print the element then 
     move on the next by adding to the pointer by type int*/
     printf("\n");   
    }

    void printS(char* p[], int i);
    //arrays of pointers are access through (array[number])
    char *strings[3] = {"First","Second","Third"};// used to store arrays of strings
    printS(strings,3);// prints all the strings in "strings" array




    //Pointers towards functions
    /*A pointer to a function points towards the starting address of 
    the function- its entry point. It provides a flexible way to call
    a function*/
    //Form: 'type (*name)(arguments)'
    float(*CtF)(float temp);// pointer to type int with 1 argument
    CtF = convertToF;//pointing to convertToF
    printf("%f  %f\n", convertToF(0), CtF(25));
    CtF = convertToC;//changing function pointer is pointing to 
    printf("%f  %f\n", convertToC(0), CtF(77));
    //the main usage of creating pointers to functions(and arrays) is for dynamic memory allocation
    /*The function by itself is a pointer constant and cant be changed.
    However, a pointer variable can be changed to point to different 
    fuctions. Pointers in arrays can be used to manipulate the elements,
    inside the array */

    //LINKED LISTS
    //Adding an element to the start of a linked list
    struct character{
        char c; //data
        struct character *link; //node(pointer to type chaacter)
    };
    struct character *head; //declaration of character and pointer to type character
    head = NULL;//empty linked list

    struct character *new;//declaration of new element
    new = (struct character*)malloc(sizeof(struct character)); //allocation of memory for first element
    (*new).c = 'H'; // c inside new now equals to c
    new->link = head; //the node inside new is equal to NULL (indicating that new points to nothing and is the last element in the linked list)
    head = new; //head pointer is now points to new (new is now in the linked list and the variable can be used for something else)
    printf("new then = %c\n",new->c);


    //Adding an element to the end of a linked list 
    new = (struct character*)malloc(sizeof(struct character));
    new->c = '!';
    new->link = NULL;

    struct character *current;
    current = head;
    while (current->link != NULL) {
        current = current->link;
        
    }
    current->link = new;
    printf("new now = %c\n",new->c);


    //Adding an element in the middle of a linked list
    new = (struct character*)malloc(sizeof(struct character));
    new->c = 'i';
    new->link = NULL;

    struct character *marker;
    marker = head;
    int n = 2;
    for (int i = 0;i<n-2; i++){
        marker = marker->link;
    }
    new->link = marker->link;
    marker->link = new;
    
    //Epic
    printf("First node in linked list = %c\n",head->link->c);
    printf("Second node in linked list = %c\n",head->c);
    
    //printing all the characters in linked list
    struct character *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%c",temp->c);
        temp = temp->link;
    }
    
    //printing a linked list in reverse
    temp = head;
    while (temp != NULL)
    { 
        temp = temp->link;   
    } 
    head = temp;
    printf("%c", head->c);
    return 0;


} 

float convertToF(float c){// function to convert celsius to fahrenheit
    int fahrenheit;
    fahrenheit = c * 9/5 +32; 
    return fahrenheit;
};

float convertToC(float f) {
    float celsius;
    celsius = (f-32)/1.8;
    return celsius;
}

void printS(char* p[], int i) {
    for (size_t n = 0; n < i; n++)//as long as n is less then i(length of array) add 1 to i
    {
        printf("Strings[%d] = \"%s\" ", n, p[n]);//print string corresponding with "string[n]"
    }
    printf("\n");//careful with single quotes
}