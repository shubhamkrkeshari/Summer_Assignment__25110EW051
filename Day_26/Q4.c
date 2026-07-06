// Question: Write a program to Create quiz application.

#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    // Step 1: Ask Question 1
    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    // Step 2: Ask Question 2
    printf("\nQ2. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n");
    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    // Step 3: Ask Question 3
    printf("\nQ3. C language was developed before Java?\n");
    printf("1. Yes\n2. No\n");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    // Step 4: Display final score
    printf("\nYour Score = %d out of 3", score);

    return 0;
}