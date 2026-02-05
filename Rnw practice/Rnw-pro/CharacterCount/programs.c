// Specific Letter count

#include <stdio.h>

int countChar(char str[] , char ch){
    int i , count = 0;

    for(i = 0; str[i] != '\0' ; i++){
        if(str[i] == ch){
            count++;
        }
    }
    return count;
}

int main(){

    char str[50], ch;

    int result;

    printf("Enter a String : ");
    scanf("%[^\n]%*c" , &str);

    printf("Enter a character to count : ");
    scanf("%c" , &ch);

    result = countChar(str , ch);

    printf("'%c' character %d times" , ch , result);

    return 0;
}