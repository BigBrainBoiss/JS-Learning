//Libraries for functions and macros used in the code. (i.e fgets(), NULL, etc.)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Password
{
    char passName[50];
    char pass[50];
};
struct Password passList[20];

void listPassNames();
void readPass(int n);
void addPass();
void userInput(char* input);
FILE *fp;

int main() {
    char startLetter[1];

    if ((fp = fopen("Pass.txt", "r")) == NULL) {
        printf("No passwords found. Creating new file... \n");
        if ((fp = fopen("Pass.txt", "w")) == NULL) {
            puts("Unable to create file");
            exit(1);
        }
        printf("File Created. \n");

    } else {
        printf ("Password file found. Printing password names...\n");
        if (fgetc(fp) == EOF)
        {
            puts("No password names found.");
        }else{
            fclose(fp);
            fp = fopen("Pass.txt","r");
        }
    }

    listPassNames();
    while(startLetter[0] != 'E') {
        printf("[A]dd password or [R]ead password or [E]xit? \n");
        scanf("%s", &startLetter);
        userInput(startLetter);
    }
    fclose(fp);
    return 0;
}

void addPass() 
{    
    char passName[50], pass[50];
    puts("Enter the name of the password:");
    scanf("%s", passName);
    fprintf(fp,"%s\n", passName);

    puts("Enter the password:");
    scanf("%s", pass);
    fprintf(fp,"%s\n", pass);
    printf("\nPrinting password names... \n");

    fclose(fp);
    fp = fopen("Pass.txt","r");
}

void listPassNames() {
    int passIndex = 0;
    int line = 1;

    fgets(passList[passIndex].passName,50,fp);
    fgets(passList[passIndex].pass,50,fp);

    while(!feof(fp)) {
        if (line % 2 != 0) {
            printf(">%d %s", ++passIndex, passList[passIndex].passName);
            fgets(passList[passIndex].passName,50,fp);
        } else {
            fgets(passList[passIndex].pass,50,fp);   
            passIndex+1;
        }
        line++;
    }
}

void readPass(int n) {
    printf("Password for: %s \n %s\n",passList[n-1].passName,passList[n-1].pass);
}

void userInput(char* input)  {
    int passNum;
        if (*input == 'A' || *input == 'a') {
            fclose(fp);
            fp = fopen("Pass.txt","a");
            addPass(); 
            listPassNames();
        } else if (*input == 'R' || *input == 'r') {
            puts("Enter a number...");
            scanf("%d", &passNum);
            printf("%d \n", passNum);
            readPass(passNum);
        }
}