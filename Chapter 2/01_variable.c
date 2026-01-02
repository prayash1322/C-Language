#include<stdio.h>

int main()
{
    int i = 10;
    int j = i;
    int a = 1, b = 2, c = 3, d = 4;
    int e,f,g,h;
    e = f = g = h = 30;
    // %d is clled format speicifier
    // %d is for int, %f is for float, %c is for char, %s is for string
    printf("The value of i is %d and the value of j is %d\n",i,j);
    printf("The value of a is %d and the value of b is %d\n",a,b);
    printf("The value of c is %d and the value of d is %d\n",c,d);
    printf("The value of e,f,g,h is %d , %d , %d , %d",e,f,g,h); // The value e f g h all of the value will assigned 30 as shown in line 9
    return 0;
}