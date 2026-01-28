#include <stdio.h>

int main()
{
    char name[50];
    int roll, sum;
    float per;
    int m1, m2, m3;
    printf("Welcome to Student Marks Calculator\n");
    printf("Enter your name:- ");
    scanf("%s", name);

    printf("Enter your roll number:- ");
    scanf("%d", &roll);

    printf("Enter mark 1:- ");
    scanf("%d", &m1);
    printf("Enter mark 2:- ");
    scanf("%d", &m2);
    printf("Enter mark 3:- ");
    scanf("%d", &m3);

    sum = m1 + m2 + m3;

    if (sum <= 300)
    {
        per = sum / 3.0;

        printf("\n--- Summary ---\n");
        printf("Name: %s\n", name);
        printf("Roll No: %d\n", roll);
        printf("Total Marks: %d\n", sum);
        printf("Percentage: %.2f%%\n", per);
        printf("Result: %s\n", per >= 40 ? "Pass" : "Fail");

        if (per >= 75)
            printf("Grade: A\n");
        else if (per >= 60)
            printf("Grade: B\n");
        else if (per >= 40)
            printf("Grade: C\n");
        else
            printf("Grade: F\n");
    }
    else
    {
        printf("\nInvalid marks detected! Total marks exceed 300.\n");
    }
    return 0;
}