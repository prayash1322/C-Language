#include<stdio.h>

int main(){
    int age = 65;

    if(age>60){
        printf("You are eligible to drive but you are senior citizen");
    }
    else if(age>40){
        printf("You are eligible to drive and you are elder");
    }
    else if(age>18){
        printf("You are eligible to drive");
    }
    else{
        printf("You are not eligible to drive");
    }
    return 0;
}