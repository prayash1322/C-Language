#include<stdio.h>

int main(){
    char a[20];
    int len = 0;

    printf("Enter a string:- ");
    scanf("%s",a);

    while(a[len] != '\0'){
        len++;
    }

    printf("Reverse String:- ");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    
    return 0;
}