#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct Password
{
    char passName[50];
    char pass[50];
};
void listPassNames();
void readPass(int n);
void addPass(struct Password new);
void editPass(char *pass);
FILE *fp;

int main() {
    char start[1];
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
           puts("Names");
        }
    }
    while(start[0] != 'E') {
        printf("[A]dd password or [R]ead password or [E]xit? \n");
        scanf("%s", &start);
        if (*start == 'A') {
            fp = fopen("Pass.txt", "a");
            struct Password new;
            addPass(new);
        }
    }
    fclose(fp);
    return 0;
}

void addPass(struct Password new) {
    puts("Enter the name of the password:");
    scanf("%s", new.passName);
    fprintf(fp,"%s\n", new.passName);

    puts("Enter the password:");
    scanf("%s", new.pass);
    fprintf(fp,"%s\n", new.pass);
}

void listPassNames() {
    char c[50];
    while (fgetc(fp) != EOF) {
        if(fgetc(fp) != '\0') {
            fgets(c, 50,fp);
        }
    }
}