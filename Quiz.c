#include <stdio.h>
#include <stdlib.h>
#include <Pointers>

#define Q_NUM 4
char gradeAns(int num);
int quizScore();
void questionDisplay(int num);

int questionNum = 0;
char ans;
int points;

int main() {
    puts("\n\t\t\t\tWelcome to C Basics Quiz");
    puts("\t\t\t\t------------------------");
    
    for (size_t i = 0; i <= Q_NUM; i++)
    {
        questionDisplay(i);
        gradeAns(i);

    }
    quizScore();
    return 0;
}

char gradeAns(int num) {
    scanf("%c",&ans);
    scanf("%c");
   switch (num)
    {
    case 0:
        if (ans ==  'a') {
            points++;
            puts("CORRECT!");
        } else {
            puts("WRONG!");
        }
        break;
    case 1:
        if (ans ==  'd') {
            points++;
            puts("CORRECT!");
        } else {
            puts("WRONG!");
        }
        break;
    case 2:
        if (ans ==  'c') {
            points++;
            puts("CORRECT!");
        } else {
            puts("WRONG!");
        }
        break;
    case 3:
        if (ans == 'b') {
            points++;
            puts("CORRECT!");
        } else {
            puts("WRONG!");
        }
        break;
    case 4:
        if (ans ==  'a') {
            points++;
            puts("CORRECT!");
        } else {
            puts("WRONG!");
        }
        break;
    default:
    fprintf(stderr, "An error has occurred.");
        break;
    }

}
void questionDisplay(int num){
    switch (num)
    {
    case 0:
        printf("Question 1: What function needs to be in every C program?\n\nA: main()\nB: return()\nC: master()\nD: printf()\n");
        break;
    case 1:
        printf("\nQuestion 2: Where do external functions come from?\n\nA: The Web\nB: Local Files\nC: External Drives \nD: Header files\n");
        break;
    case 2:
        printf("\nQuestion 3: What are pointers in C?\n\nA: The output stream that is responsible for display.\nB: Files that point towards other functions.\nC: Variables containing addresses of other variables\nD: Functions pointing towards other functions\n");
        break;
    case 3:
        printf("\nQuestion 4: Strings consist of?\n\nA: Quotation Marks and Yarn\nB: Quotation Marks,Characters and a terminating character\nC: Quotation Marks,Letters,numbers and format specifers \nD: Quotation Marks, bytes and the correct escape characters\n");
        break;
    case 4:
        printf("\nQuestion 5: What is the correct way of print \"Hello World!\"?\n\nA: printf(\"Hello World!\");\"\nB: console.log(\"Hello World!\");\nC: print:\"Hello World!\"\nD: std::cout << \"Hello World!\";\n");
        break;
    default:
        fprintf(stderr, "An error has occurred.");
        break;
    }
}

int quizScore() {
    printf("Your Score: %d/5 \n",points);
}

