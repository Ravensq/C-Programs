#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,sum,avg;
clrscr();
printf("\nEnter three no:");
scanf("\n%d %d %d",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
printf("The addition of three no's is:%d",sum);
printf("\nThe average of three no's is:%d",avg);
getch();
}