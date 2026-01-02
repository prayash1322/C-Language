#include<stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
            // break; // Exit the loop now!
            continue; // Skip this iteration now! means skips 5
        }
        printf("i is %d\n",i);
    }
    printf("For loop is Done");
    return 0;
}