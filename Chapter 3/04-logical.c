#include<stdio.h>

int main(){
    int a=1; int b=1;
    printf("The value of a and b is %d\n",a&&b);
    printf("The value of a or b is %d\n",a||b);
    printf("The value of not(a) is %d\n",!a);

    if(a && b){
        printf("Both values are True\n");
    }
    // is same writing is same...

    if (a){
        if(b){
            printf("Both values are True\n");
        }
    }
    
    return 0;
}