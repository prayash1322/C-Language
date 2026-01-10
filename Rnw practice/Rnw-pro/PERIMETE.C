#include<stdio.h>
#include<conio.h>

int main() {
	float r = 7;
	float peri;
	clrscr();

	peri  = 2 * 3.14 * r;

	printf("Perimeter of Circle = %.2f",peri);
	getch();

	return 0;
}