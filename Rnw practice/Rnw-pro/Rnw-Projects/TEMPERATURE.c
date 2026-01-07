#include<stdio.h>
#include<conio.h>

main(){
	float Cel , Fer = 0;
	clrscr();
	printf("Enter Temperature in Celsius C:");
	scanf("%f",&Cel);
	Fer = (9 * Cel)/5 + 32;
	printf("Temperature in Fahrenheit is: %f",Fer);
	getch();
    return 0;
}