#include<stdio.h>
#include<conio.h>

main(){
	float height,breath, area = 0;
	clrscr();
	printf("Enter Value of h:");
	scanf("%f",&height);
	printf("Enter Value of b:");
	scanf("%f",&breath);
	area = height * breath / 2;
	printf("Area of Triangle is:%f",area);
	getch();
    return 0;
}