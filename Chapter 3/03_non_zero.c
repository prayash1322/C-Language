#include<stdio.h>

int main(){
    if (1){
        printf("This if is excueted\n");
    }
    if (1231){
        printf("This if is also excueted\n");
    }
    if (2.75){
        printf("This if is also excueted\n");
    }
    if ('c'){
        printf("This if is also excueted\n");
    }
    if (0){
        printf("I am zero - I will be not excueted\n"); // This will be not excueted because in C non_zero value is true and excueted but 0 (zero) will be not be excueted.
    }
    return 0;
}