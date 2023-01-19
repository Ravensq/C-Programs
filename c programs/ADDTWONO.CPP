#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,sum;
float avg;
clrscr();
printf("\nEnter two no:");
scanf("%d %d",&a,&b);
sum=a+b;
avg=sum/2;
printf("The addition of two no's is:",sum);//
printf("The average of two no's is:",avg);//
getch();
}