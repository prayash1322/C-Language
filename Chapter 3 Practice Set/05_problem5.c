#include<stdio.h>

int main(){
    char ch = 'z';
    printf("The character is %c \n", ch);
    printf("The character is %d \n", ch);
    //97,122
    if(ch<=122 && ch>=97){
        printf("The character is lowercase\n");
    }
    else{
        printf("The character is not lowercase\n");
    }
   return 0;
}