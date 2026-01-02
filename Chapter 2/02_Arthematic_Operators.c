 #include<stdio.h>
 
 int main(){
    int a = 5;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and b is %d so sum is %d\n",a,b,c);
    // Modulus Operater is used to get the remainder of the number 
    printf("The remainder when a is devided by b is %d\n", a%b);

    // This will not work in exponentation in C 
    // int d = a^b;
    return 0;
 }