//Hello World!

/*C is a programming langauge used to have precise control of memory and performance of the program. It is also very portable, being able to be understood by most computers.*/

/*Scope is the level at which code can be manipulated. Scope is defined through blocks({}). Global scope means it can be accessed from anywhere in the program. Local is somehting that can be seen or manipulated only within the block it was declared */

#include <stdio.h> /*Preprocessor directive: instructs the complier to modify the code. #include is retrieving C code from stdio.h. Files used this way end with the .h extension and are called header files. printf is the code being used from stdio.h (standard input/output)*/

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

int main(void) //Main is a function, where all are code will be stored in. Void tells the computer that there are no arguments to be made.
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
	int arrayNum[] = {1 , 2 , 3 , 4 , 5};
	int emptyArray[10]; //potential to hold ten elements

	//Function call
	sayHi("Hello! \n");

	printf("%d\n", choice(23,453,1));

	grade('D');
	return 0; //Returns 0 to the main function, return lets the system know when the process has succeeded or not
}



/*1. Determine the objective(s) of the program.
2. Determine the methods you want to use in writing the program.
3. Create the program to solve the problem.
4. Run the program to see the results. */