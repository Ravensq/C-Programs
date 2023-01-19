#include<stdio.h>
#include<conio.h>
//To add,subtract,quotient,remainder
void main()
{
int x,y,add,sub,quo,rem;
clrscr();
printf("Enter the numbers:");
scanf("%d %d",&x,&y);
add=x+y;
sub=x-y;
quo=x/y;
rem=x%y;
printf("The addition of numbers is:%d",add);
printf("\nThe subtraction of numbers is:%d",sub);
printf("\nThe remainder of the numbers is:%d",rem);
printf("\nThe quotient of the numbers is:%d,",quo);
getch();
}