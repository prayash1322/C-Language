#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0)); 
 
    int num = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    printf("**Welcome to Number Guesser Game**\n");
    printf("\n");
    do{
        printf("Guess the number:- ");
        scanf("%d", &guessed);
        if(guessed>num){
            printf("Your Guessed Number is High! Lower Number Please!!\n");
        }
        else if(guessed<num){
            printf("Your Guessed Number is Low! Higher Number Please!!\n");
        }
        else{
            printf("You did it!!\n");
        }
        no_of_guesses++;
    }while(guessed!=num);
    printf("Congratulations!! You Guessed the number in %d guesses", no_of_guesses);   
    return 0;
}
