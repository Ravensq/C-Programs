#include<stdio.h>
#include<conio.h>

void main()
{
int c,f;
clrscr();
printf("Enter the degree celcius:");
scanf("\n%d",&c);
f=c*9/5+32;
printf("\nThe temperature converted into fahrenheit is: %d",f);
getch();
}