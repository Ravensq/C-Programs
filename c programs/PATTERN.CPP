#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int i,j;
printf("\n the pattern is :\n");
for(i=0;i<=10;i++)
	{
	 for(j=0;j<=i;j++)
		{
		printf(" * ");
		}
	 printf("\n");
	}
getch();

}