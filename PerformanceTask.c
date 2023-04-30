//Libraries for functions and macros used in the code. (i.e fgets(), NULL, etc.)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Definition of structure containing strings for the password names and the passwords themselves.
//Sturctures are used to group variables into one block of memory/variable.
struct Password
{
    char passName[50];
    char pass[50];
};
/*Definition of a list "new" with 20 instances of structure "Password" inside.  Each index of new stores the password and its name for easy retrival and iteration.*/
struct Password new[20];

//"listPassNames()" iterates through a file containing all passwords and password names, puts them into the "new" array and prints them out and numbers them.
void listPassNames();
// readPass will take an integer of the user and return the password corresponding to integer
void readPass(int n);
// addPass will take two strings fro the user, the first one being the password name and the second one being the password itself.
// addPass well then print the user input into a file named "Pass.txt"
void addPass();
void editPass(char *pass);
// This line declares a file pointer variable that will eventually point to "Pass.txt" later on
FILE *fp;

int main() {
    //
    int passNum;
    // Initializes a variable of type string with one character, this variable will be used to determined if the user wants to add/read a passsword or exit the program.
    char startLetter[1];

    /*The following code section checks if a file called "Pass.txt" exists, if it doesnt then it prints tells the user it will create
    the file. However if the program fails to create a new file, the program will warn the user something has gone wrong, and exits the 
    program as an error.*/
    if ((fp = fopen("Pass.txt", "r")) == NULL) {
        //Prints the following if now "Pass.txt" file exitst.
        printf("No passwords found. Creating new file... \n");
        if ((fp = fopen("Pass.txt", "w")) == NULL) {
            //Prints and exits the program with an error if a new file cant be opened.
            puts("Unable to create file");
            exit(1);
        }
        printf("File Created. \n");
    /* ***************************************************************************************************************************** */
    /*If "Pass.txt" exists, program will first check if there is anything inside the file, informing the user that there is no data 
    inside the file if there is none. If there is data inside the file, the program will list the password names and number them 
    through listPassNames()*/
    } else {
        //If file is found, print the following
        printf ("Password file found. Printing password names...\n");
        if (fgetc(fp) == EOF)
        {
            //If file has no text, print the following.
            puts("No password names found.");
        }else{
            //If file does have text, run listPassNames to print all of the Password names to the terminal.
            fclose(fp);
            fp = fopen("Pass.txt","r");
            listPassNames();
        }
    }
    /* *************************************************************************************************************************** */
    /*Once the program informs the user of the status of "Pass.txt",*/
    //Keeps the program going as long as 'startLetter' isnt equal to the character 'E'
    while(startLetter[0] != 'E') {
        //Prompt the user to press either A, R or E
        printf("[A]dd password or [R]ead password or [E]xit? \n");
        //Retrives one character
        scanf("%s", &startLetter);
        if (*startLetter == 'A' || *startLetter == 'a') {
            //If user inputs 'A', open the file for appending text and run addPass to allow the user to insert a new password.
            fclose(fp);
            fp = fopen("Pass.txt","a");
            addPass(); 
        } else if (*startLetter == 'R' || *startLetter == 'r') {
            //If user inputs 'R', open file for reading and asks the user to input a number for the program to retrieve a password at that specific index in the array "new"
            puts("Enter a number...");
            scanf("%d", &passNum);
            printf("%d \n", passNum);
            readPass(passNum);
        }
    }
    /**/
    //Close the file and end the program.
    fclose(fp);
    return 0;
}

//addPass is a function with return type void. Allows the user to add a new password name with password.
void addPass() 
{    
    //defines passName and pass as a string with 50 character lenght. Will be used to hold user input.
    char passName[50], pass[50];
    //Prompts the user to enter a name for the password. Stores user input in passName
    puts("Enter the name of the password:");
    scanf("%s", passName);
    //Prints contents of passName into the file pointed by fp. In this case, it will always be "Pass.txt"
    fprintf(fp,"%s\n", passName);

    //Prompts the user to enter the password. Stores user input in pass
    puts("Enter the password:");
    scanf("%s", pass);
    //Prints contents of pass into the file pointed by fp. In this case, it will always be "Pass.txt"
    fprintf(fp,"%s\n", pass);
    //Once the user inputs both name and pass word, program states that it will print password names again.
    printf("\nPrinting password names... \n");

    //Close file and reopens it for reading.
    fclose(fp);
    fp = fopen("Pass.txt","r");

    //Calling listPassNames to read the names of passwords from "Pass.txt"
    listPassNames();
}

//listPassNames is a function with return type void. Iterates through "Pass.txt" to store passwords and their names into new and prints names onto the screen while numbering them
void listPassNames() {
    //Variable to keep count of where in "new" should the function store password and its name.
    int passIndex = 0;
    //Variable to keep count of which line the function is on in "Pass.txt"
    int line = 1;
    //Retrives both the first and second line of "Pass.txt" and stores them in passName and pass inside of the first index in new.
    fgets(new[passIndex].passName,50,fp);
    fgets(new[passIndex].pass,50,fp);
    //While the function hasnt reached the end of life
    while(!feof(fp)) {
        /*Prints the line its currently on and numbers them.
        The line the function will print will always be the password name.*/
        printf(">%d %s", passIndex+1, new[passIndex].passName);
        //Adds one to passIndex, signifying that the next password and name pair is being read and stored.
        passIndex++;
        //Stores the string of the current line (password name)
        fgets(new[passIndex].passName,50,fp);
        //Stores the string of the next line (Password)
        fgets(new[passIndex].pass,50,fp);   
        //Increments line by 2 since the function has read 2 lines at this poin.t
        line+2;
    }
}

//readPass is a function with return type void that can accept an integer as a parameter.
void readPass(int n) {
    //Prints the password at new(n-1).
    //The reason for n-1 is because the program numbers the password names starting by one, while new starts at 0.
    printf("Password for: %s \n %s\n",new[n-1].passName,new[n-1].pass);
}