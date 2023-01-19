#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,max;
clrscr();
printf("\nEnter the no:");
scanf("%d\n %d",&a,&b);
if(a>b)
{
  printf("\nThe max is:%d",a);
}
else
{
 printf("\nThe max is:%d",b);
}
getch();
}