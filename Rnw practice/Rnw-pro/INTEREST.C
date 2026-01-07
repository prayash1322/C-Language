#include<stdio.h>
#include<conio.h>

int main() {
	float p = 1000;
	float r = 5;
	float n = 2;
	float si;
	clrscr();

	si  = (p * r * n) / 100;

	printf("Simple Interest = %.2f",si);
	getch();

	return 0;
}