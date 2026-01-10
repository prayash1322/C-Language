#include <stdio.h>

int main()
{
    int num, c = 0;
    printf("Enter any number you want: ");
    scanf("%d", &num);
    do
    {
        num = num / 10;   
        c++;          
    }
    while (num != 0);
    printf("Total number of digits are this = %d", c);
    return 0;
}