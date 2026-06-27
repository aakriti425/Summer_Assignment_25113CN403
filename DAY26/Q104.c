// Write a program to Create quiz application.

#include <stdio.h>

int main()
{
    FILE *fptr = fopen("Question.txt", "r"); // opening file

    if (fptr == NULL) // checking whether file is open or not
    {
        printf("File not Open\n");
        return 1;
    }

    char question[200];  // character array to store question 
    char op1[100], op2[100], op3[100], op4[100];  // char array to store options of question 
    char answer[10]; // char array for correct answer 
    char userAns; // char array for user given answer 
    int score = 0 ;// score  storing 
    char space[10]; // array for store space between two question 


    while (fgets(question, sizeof(question), fptr) != NULL) // reading a single line by fgets // while loop until fgets is not equal to NULL 
    {
        printf("\n");
        printf("%s", question); // printing question 

        // reading options 
        fgets(op1, sizeof(op1), fptr);
        fgets(op2, sizeof(op2), fptr);
        fgets(op3, sizeof(op3), fptr);
        fgets(op4, sizeof(op4), fptr);

        // printing options
        printf("%s", op1);
        printf("%s", op2);
        printf("%s", op3);
        printf("%s", op4);

        // taking user answer
        printf("Enter Answer:");
        scanf(" %c", &userAns);

        // reading correct answer from the file 
        fgets(answer, sizeof(answer), fptr);

        // comparing user answer with correct answer 
        if (answer[0] == userAns)
        {
            score++; // if answer is correct score update 
            printf("Correct\n");
        }

        fgets(space, 10, fptr); // reading space line 
    }

    printf("\nYour Total score = %d/5", score); // printing score 
    fclose(fptr);// closing the file 
    return 0;
}