#include<stdio.h>

int main(){
    int age = 15;
    if (age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n   ");
    }
    if (age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible with 5");
    } // = is assignment operator but == is equals to it is a relationals operator
    return 0;
}