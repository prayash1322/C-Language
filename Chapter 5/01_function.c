#include<stdio.h>

// This is called Function Prototype
int sum(int,int);
// Function Defination
int sum(int x,int y){
    // printf("The sum is %d\n",x+y);
    return x + y;
}

int main(){
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum of a and b is %d\n",c);
    int c = sum(a,b); // Funtion Call
    printf("%d\n",c);

    int a1 = 12;
    int b1 = 23;

    // int c1 = a1 + b1;
    // printf("The sum of a and b is %d\n",c1);
    int c1 = sum(a1,b1); // Funtion Call
    printf("%d\n",c1);
    return 0;
}