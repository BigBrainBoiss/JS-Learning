//Hello World!

/*C is a programming langauge used to have precise control of memory and performance of the program.
It is also very portable, being able to be understood by most computers.*/

/*Scope is the level at which code can be manipulated. Scope is defined through blocks({}). 
Global scope means it can be accessed from anywhere in the program. 
Local is somehting that can be seen or manipulated only within the block it was declared */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
/*Preprocessor directive: instructs the complier to modify the code. #include is retrieving C code from stdio.h aswell as the other files. 
Files used this way end with the .h extension and are called header files. printf is the code being used from stdio.h (standard input/output).
You use the #include directive to instruct the compiler to add a specific include file to your program during compilation(linking) printf is from the standard input/output header filer */


//Functions can exist outside of main fucntion
//Functions need to have a return type to notify C what type of data can be returned 
void sayHi(char para[]) {
	printf("%s", para);
};

int choice( int n1, int n2, int n3) {
	int ans;
	if (n1 > n2 && n1 > n3) {
		ans = n1;
	} else if (n2 > n1 && n2 > n3) {
		ans = n2;
	} else {
		ans = n3;
	}
	return ans;
}

//Switch statments compare one value to a bunch of values
//The expression in a switch statement can evaluate to a long, int, or char value.
char grade(char grade) {
	switch (grade)
	{
	case 'A':
		printf("You got a 90 and higher!\n");
		break;
	case 'B':
		printf("You got a 80-90!\n");
		break;
	case 'C':
		printf("You got a passed.\n");
		break;
	case 'D':
		printf("try better\n");
		break;
	case 'F':
		printf("failed\n");
		break;
	default:
		break;
	}
} 

int main(void) //Main is a function, where all are executable code will be stored in. Void tells the computer that there are no arguments to be made.
{
	//Variables 

	const double DECIMAL = 4.5; //Constant Variable
	char byte = 'A';
	char name[] = "Jake";
	int age = 10;
	/* C data types:
	Integers(add unsigned before it to make it unsigned):
		char
		int
		short
		long 
		long long
	Real numbers:
		float
		double
	*/
	
	//Library function
	printf("There once was a kid named %s.\n", name); 
	printf("He was %d years old.\n", age); 

	puts("yo!"); //puts is the same as printf except it cant display numbers or variables
	
	//Format specifers: %s is the concatenation placeholder, can combine variables and strings to make a whole string. Will replace %s with the variable specified at the end of the string.
	//%d is for integers, %f is for floats, %c is for single characters

	//User input
	/*int userAge;
	char userName[20];
	printf("Name: \n");
	fgets(userName, 20, stdin); //fgets collects the whole string inputed by the user. Format: fgets(variable, amount of characters, file)

	printf("Your name is %s\n", userName);

	printf("Age: \n");

	scanf("%d", &userAge); //scanf collects input from the user but only until the first space. Format: scanf(FormatSpecifer, (pointer)variable)

	printf("Your age is %d\n", userAge);*/	

	// Arrays
	//if the dimension of the array is specified and only some of the space is occupied, the rest of the array will contain a value of zero
	int arrayNum[] = {1 , 2 , 3 , 4 , 5};
	
	//first bracket may be left empty but the second must be specified
	/********************************************
	 int array[rows(optional)][column(mandatory)]
	 
	 		 columns
	 rows	|  0,0	|  0,1	|
	 		|  0,1	|  1,1	|

	 *********************************************/
	int multiDimensionalArray[][3] = {
		{1,2,3},
		{4,5,6}
	};
	int emptyArray[10]; //potential to hold ten elements

	printf("Array Element #2 is: %d\n", arrayNum[1]);

	int anArray[]= { 3, 6, 9, 12, 15 };
	printf("Size:%d\n", sizeof(anArray)/4);
	/*?? it seems sizeof() returns the amount of bytes the argument has: 
	for example 5 integers are equivalent to 20 bytes (5*4) and dividing that by 4 (or the size of long)
	Will return the amount of elements in the array. 
	Shorts are equal to 2 bytes, ints are 4(long), doubles(long long) are 8. chars are always 1 byte long, 
	you dont have to divide a string to get the amount of characters in it.*/  


	//Strings are arrays of characters
		char randomString[] = "Merkkijono";
		for(int i = 0; i <sizeof(randomString); i++) {
			printf("Character of the string:%c Index: %d\n", randomString[i], i);// last charcter of the string is a null
		}

	
	//Function call
	sayHi("Hello! \n");

	printf("%d\n", choice(23,453,1)); //should return 453

	grade('D');//should return "try better"

	//Memory addreses in C
	printf("Variable \"byte\" memory address: %p \n", &byte);//%p for pointers (like memory addresses) 

	printf("Variable \"char\" memory address: %p \n", &name);
	printf("Variable \"char\" memory address: %p \n", name);

	//Pointers are a type of data: & is a pointer that is just the memory address. When creating a pointer you have store a memory address, such as anothes varibles memory address.Use the same data type as the variable

	int *pAge = &age;

	printf("Pointer variable: %p\n", pAge);// prints address
	printf("Mem Address: %p\n", &age);
	printf("Mem Address: %p\n", &age);
	//Derefencing a pointer: grabs the value stored at that memory address
	printf("Int age value: %d\n", *pAge); // Asterik deferences the pointer/prints value

	//Editing files in C
	/*FILE: Initiation, like a data type
	* fpointer: variable of file, pointing to the memory address of file on our computer
	= fopen(): (Name of file, mode/action towards the file)*/
	FILE * fpointer= fopen("Hello.txt","w");// Modes: r(ead),w(rite),a(ppend)

	fprintf(fpointer, "Hello World! \nSecond line!\n");
	fclose(fpointer);
	char line [255];

	fpointer= fopen("Hello.txt","r");// Modes: r(ead),w(rite),a(ppend)

	fgets(line, 255, fpointer);
	printf("%s", line);
	fgets(line, 255, fpointer);//fpointer gets incremented to the second line
	printf("%s", line);

	fclose(fpointer);

	//DATA TYPE MODIFIERS
	//long and short alter the data storage of a variable
	short int byte2 = 32767;

	long long int byte8 = 3000000000;
	
	int byte4 = 80000000;

	unsigned int alwPositive = 4000000000; 

	//#define is a macro that replaces words with the imput desired
	#define DEFINE_REPLACEMENT "Hello!\n"

	printf(DEFINE_REPLACEMENT); //prints hello
	 
	 //staic keyword allows the variable to retain its value even after the scope its in ends. The value can be accessed and changed through function calls 
	

	typedef short shortened; // typedef creates a new name for an existing data type, a synonym for it 

	shortened shor = 3; // shortened can be used to initialize a short variable

	printf("%d\n", shor);

	//conditional operator: exp1 ? exp2 : exp
	/*If exp1 evaluates to true (that is, nonzero), the entire expression evaluates to the value of exp2.
	 *If exp1 evaluates to false (that is, zero), the entire expression evaluates as the value of exp3*/

	/* Operator precedence: 
	1 () [] -> .
	2 ! ~ ++ -- * (indirection) & (address of) (type)
sizeof + (unary) - (unary)
	3 * (multiplication) / %
	4 + -
	5 << >>
	6 < <= > >=
	7 == !=
	8 & (bitwise AND)
	9 ^
	10 |
	07 448201x-CH04 8/13/02 11:15 AM Page 87
	11 &&
	12 ||
	13 ?:
	14 = += -= *= /= %= &= ^= |= <<= >>=
	15 ,
*/

	/*POINTERS */
	int rate = 100;

	int *p_rate = &rate; //asterik defines a pointer variable, ampersand is the address-of operator
	printf("%d\n", rate); //variable value/100(direct)
	printf("%d\n", *p_rate); //address value/100(indirection)

	printf("%d\n", p_rate);//pointer variable/address
	printf("%d\n", &rate);//ampersand operator/address

	/*Arrays store their elements in one big chunk of memory, with the the first elements address 
	the address of the whole array(this is true for every variable).
	Subsequent elements are stored on higher addresses*/

	double mArr[5], *mpArr;
	mpArr = mArr; //
	//array name without brackets is a pointer to the array's first element
	//(data == &data[0])

	/*Pointers can be modified and changed to point to another variables address
	Pointers to different elements: Example
	 x == 1000 
	 &x[0] == 1000
	 &x[1] = 1002 
	 expenses == 1250 
	 &expenses[0] == 1250 
	 &expenses[1] == 1254
	 Following elements of array x are stored in the next avaliable address
	 */
	for (int i = 0; i < sizeof(multiDimensionalArray)/4; i++) {
		printf("%d\n", &multiDimensionalArray[0][i]);
	};
	/*Pointer artihmitic can be used to increment or decrement pointers to the next 
	memory address, C already knows the data type of the pointer you are incrementing
	so (float_array++) will add 4 to go to the next address. In this context, 1 is
	equal to the byte size of the data type (e.g float _array+= 4; is will add 16). 
	Decrementing is the same process.
	Differencing is the act of substracting pointers to find out how far apart they are from each other (ptr1 - ptr2).
	You can also compare pointers to each other using the logical operators
	
	Assignment: Assign a value to a pointer using  & or a pointer constant(array)
	Indriection: Give the value stored in the the location that is being pointed to
	Address of: & (more on day 15)
	
	*(array) == array[0]
	*(array + n) == array[n]*/ 

	//Passing arrays to functions
	/*arguments have to be a single value. Pointers are a single value that can be 
	used pass arrays to functions by pointing to the address holding the array*/
	int largest(int num_arr[], int length);
	printf("Largest value = %d\n",largest(anArray, 5));
	

	//STRING WITHOUT ARRAYS
	char *message = "Hello Commander"; /*Same thing as 
	message[]*/

	//malloc() function
	/*The malloc functions enables the programmer to allocate 
	memory on-the-fly. You pass a number of bytes needed and 
	it returns the address of the first byte. The address belongs
	to the allocated space the size of the input*/
	puts(message);
	
	char *ptr;

	ptr = malloc(1);

	*ptr = "x";

	free(ptr);


	//STRUCTURES 
	/*structures are a collections of variables under a name.
	These variables can be of different data types, and can
	even hold arrays and other structures. These variables are
	called variables of the structure.*/
	//simple structure

	struct coord 
	{
		int x;
		int y;
	} first, second;//declaration of struct coord
	//first and seconds are now instances of coord; they contain
	//both variables x and y 
	struct coord third, fourth; //declaration of struct coord

	//accessing members(properties) of a structure
	first.x = 50;
	second.x = 100;
	first.y = 25;
	//making one structure equal another of the same type copies all the information of the members between them
	first = third;
	/*Structures are merely templates, blueprints for when 
	they are actually declared. Structures can be declared with
	any name. The name know has all the information from the 
	template*/
	//array of structures
	struct entry //struct with 3 arrays of type char
	{
		char *fname; //pointers allow for direct modification with strings
		char *lname;
		char *phone;
		int *age; 
	}entry2;
	
	entry2.fname = "John";

	struct entry list[10]= {
		"John", "Doe", "123-456-7890"//first element of list
	};
	//creates array of stuctures
	//each element in list is a stucture of entry

	printf("Phone Number: %s\n", list->phone);
	printf("First name; %s\n", entry2.fname);

	//pointers to structures
	struct part {
		short number;
		char name[10];
	} data[100];
	struct part *p_part; //pointer of size "struct part"
	struct part gizmo; //declaration of struct part named gizmo
	p_part = &gizmo;//p_part pointing to gizmo

	gizmo.number = 100; //(stucture name)OR
	(*p_part).number = 100; //(indirection)OR
	p_part->number= 100; //(indirect membership)-> is only used with pointers

	//pointers and arrays of structures
	struct part *a_part;
	a_part = data; // or &data[0]

	/*To iterate through all the instances of the structures
	in data, we would have to increase the number of the pointer*/
	for (int i = 0; i < 100; i++) {
		printf("In data[%d], %s and %d are values", i,a_part->name, a_part->number);
		a_part++;
	};

	//structures as arguments
	/*Create a structure and declare it
	struct tagS {
		void member;
	}declaration;

	 *Create a function with "struct {tag} {name}" as argument
	void structFunct(struct tagS arg);

	 *pass the declared structure through the function
	structFunct(declaration); */


	//UNIONS
	/*unions are similar to structures in the sense that
	 they both store mutliple data types into one varaible,
	 the difference is that declaration of unions can only use one member at a time.
	 This is because the members in a union
	 occupy the same area of memory, laid on top of each
	 other*/
	union shared
	{
		char *c;
		char *i;
	};//only the first member can be initialized 
	
	union shared one;

	one.c = "Only this variable should be used until\n";
	one.i = "Other variables are declared\n"; 
	//declaring i removes the value of c in the union
	// Using a variable other from the one that is declared
	// can cause unexpected problems
	//size of a union is equal to its largest member
	
	//VARIABLE SCOPE
	/*Variable scope refers the to the extent where a variable is
	able to be accessed in code, in other words, where the 
	variable is visible. Variable refers to all data types.
	It also affects how long it persists in memory before 
	it is deallocated*/
	int scope = 129; //scope can only be accesed in int main
	//where you define a variable is important
	//static vs automatic 
	/*automatic variables are destoryed after thery leave 
	the scope they where declared in. local variables are 	automatic by default. Static varaibles are able to 
	retain their values between function calls and therefore,
	retained in memory. Though you cannot use extern to acess
	the variable from another fiel.*/
	static int scope2 = 5;//declaring a static variable in main{} is useless
	extern int scope3;
	
	/*Give each variable an automatic local storage class to begin with.
	• If the variable will be manipulated frequently, such as a loop counter, add the register keyword to its definition.
	• In functions other than main(), make a variable static if its value must be retained between calls to the function.
	• If a variable is used by most or all of the program’s functions, define it with the external storage class.*/
	// every variable has scope: which is where it is visible and how long it persists in memory
	

	//PROGRAM CONTROL
	
	//ending loops early
	/*The break function can terminate loops early. This 
	function can only be placed in a loop and can be put 
	anywhere inside*/

	while(scope2 >1) { //infinite loop
		printf("Static variable scope2 is %d\n", scope2);
		scope2++; //adds to scope2's value
		if(scope2 == 10){ 
			break; // once scope2 reaches a value of 10, the loop terminates
		}
	}// multiple breaks can be used but the first one executed takes effect 

	//continue function
	/*The continue function skips the current iteration 
	its currently on and starts the next iteration of 
	the loop*/

	for(register int i = 0; i <= 15; i++){
		if(i % 2 == 0){
			continue;
		} else {
			printf("Odd numbers: %d\n", i);
		}
		
	}

	//goto function
	/*Should be used sparingly. The goto function is a jump/
	branching statements. When the program encounters the goto statment, the execution jumps to the location specified by the goto function. If encountered, it will 
	always branch off. 
	Format: goto location;
	The goto statment can jump ahead or before the code, but 
	it has to be in the same function*/

	//exit() function
	/*The exit() function terminates the program and returns the passed argument to indicate success or failure. 
	It isused for error handling. Must include stdlib.h**/
	//The exit function should return 0(success) or 1(error)
	EXIT_FAILURE; //1
	EXIT_SUCCESS; //2
	//these typedefs can be passed to the exit()fucntion


	//EXECUTING OS COMMANDS IN A PROGRAM
	//Syntax: system(command);
	/*THe system() function lets you execute commands of 
	the operating system in your program. (i.e reading a
	disks directory). Must include stdlib.h*/


	//Streams in C
	/*Streams are sequences of bytes flowing in and out of
	the program to external sources.These streams are
	connected to input and output devices. There are streams 
	for the keyboard display (stdin, stdout, stderr etc.) 
	These are standard streams of C and requires no action 
	of the programmer.printf() uses the standard stream 
	stdout to print the code in the terminal. There are two 
	types of stream functions. One that uses the standard 
	stream (printf) and one that needs the user to specify 
	the stream (fprintf)/ Fprintf might be directed to a 
	text file.
	 */
	//Hierachy: Charcter input, line input, formatted input

	//getc() and fgetc()
	/*Both of these functions dont automatically use the 
	stdin stream. They are used to read characters from 
	disk files.
	*/


	//ungetc()
	/*Ungetting a character from the input stream. Basically 
	removing a character from the stream and returning it to
	its input device. The removed character is now the first 
	character read by the next input operation.You can only unget one charcter and it cant be EOF (ending character).Prototype: int ungetc(int ch, FILE *fp)*/


	//line input functions
	//gets()
	/*Puts all the characters from the input into a string.
	Takes a pointer to type char as argument and returns
	pointer. Must allocate memory to store the string.*/
	//fgets is like gets but allows to specify input stream
	//formatted input functions

	//scanf()
	/**/

	//fflush()
	/*fflush() gets rid or flushes the information of a stream. You can
	flush extra characters leftover in stdin by calling fflush(stdin)*/
	    for (size_t i = 0; i <= 3-2; i++)
    {
        printf("%d \n", i);
    }

	
	return 0; //Returns 0 to the main function, return lets the system know when the process has succeeded or not

};

	int largest(int num_arr[], int length) 
	{
		int ctr, biggest = -1;
		for (ctr = 0; ctr < length; ctr++){
			printf("%d\n",num_arr[ctr]);
			if (num_arr[ctr] > biggest) {
				biggest = num_arr[ctr];
				};
		};
		return biggest;
	};
	
	




/*1. Determine the objective(s) of the program.
2. Determine the methods you want to use in writing the program.
3. Create the program to solve the problem.
4. Run the program to see the results. */