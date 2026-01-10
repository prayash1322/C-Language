#include<stdio.h>
#include<conio.h>

int main() {
	int r;
	float area;

	clrscr();

	r = 7;
	area = 3.14 * r * r;

	printf("Area of Circle = %.2f",area);
	getch();
	return 0;
}