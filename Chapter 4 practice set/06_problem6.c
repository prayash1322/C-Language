#include<stdio.h>

int main(){
    // int i = 1;
    int sum = 0;
    // Using Do While Loop 
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i<=10);
    // Using For Loop
    for (int i = 1; i <= 10; i++){
        sum += i;
    }
    
    printf("The sum of first 10 natural number is %d",sum);
    return 0;
}