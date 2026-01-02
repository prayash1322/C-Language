#include<stdio.h>
#include<conio.h>

int main() {
	int x,y;
	int sq;
	clrscr();
	printf("Enter the value of x :- \n");
	scanf("%d",x);
	printf("Enter the value of y :- \n");
	scanf("%d",y);

	sq = (x + y)*(x + y);
	printf("Hello richa this is your answer:- %d\n",sq);
	getch();
	return 0;
}