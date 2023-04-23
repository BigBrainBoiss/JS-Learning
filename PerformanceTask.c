#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Password
{
    char passName[50];
    char pass[50];
};
struct Password new[20];

void listPassNames();
void readPass(int n);
void addPass();
void editPass(char *pass);
FILE *fp;

int main() {
    int passNum;
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
            fclose(fp);
            fp = fopen("Pass.txt","r");
            listPassNames();
        }
    }
    while(start[0] != 'E') {
        printf("[A]dd password or [R]ead password or [E]xit? \n");
        scanf("%s", &start);
        if (*start == 'A' || *start == 'a') {
            fclose(fp);
            fp = fopen("Pass.txt","a");
            addPass(); 
        } else if (*start == 'R' || *start == 'r') {
            puts("Enter a number...");
            scanf("%d", &passNum);
            printf("%d \n", passNum);
            readPass(passNum);
        }
    }
    fclose(fp);
    return 0;
}

void addPass() 
{    char passName[50], pass[50];
    puts("Enter the name of the password:");
    scanf("%s", passName);
    fprintf(fp,"%s\n", passName);

    puts("Enter the password:");
    scanf("%s", pass);
    fprintf(fp,"%s\n", pass);
    printf("\nPrinting password names... \n");

    fclose(fp);
    fp = fopen("Pass.txt","r");

    listPassNames();
}

void listPassNames() {
    int i = 0;
    int line = 1;
    fgets(new[i].passName,50,fp);
    fgets(new[i].pass,50,fp);
    while(!feof(fp)) {
        if (line % 2 != 0)
            printf(">%d %s", i+1, new[i].passName);
        i++;
        fgets(new[i].passName,50,fp);
        fgets(new[i].pass,50,fp);   
        line+2;
    }
}

void readPass(int n) {
    printf("Password for: %s \n %s\n",new[n-1].passName,new[n-1].pass);
}