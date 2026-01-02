#include<stdio.h>

int main(){
    int i = 5;
    i = i + 5; // 10
    printf("The value of i is %d\n",i);
    // i++; // 11
    printf("The value of i is %d\n",i);

    printf("The value of i is %d\n",i++);
    printf("The value of i is %d\n",i);

    // i++ prints i first and then increaments i (Post increament Operator)
    // ++i increaments i first and then prints i (Post increament Operator) 

    i+=2; // Same as i = i + 2;
    printf("The value of i is %d\n",i);
    return 0;
}