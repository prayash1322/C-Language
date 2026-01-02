#include<stdio.h>

int main(){
    // What is factorial in C :-
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8  
    // 5! = 1 X 2 X 3 X 4 X 5  
    int product = 1;
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        product *=i;
    }
    printf("The Factorial of 4 is %d",product);
    return 0;
}