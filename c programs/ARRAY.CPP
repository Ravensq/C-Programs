#include<stdio.h>
#include<conio.h>

void main()
{
int i,A[10]={1,2,3,4,5,6,7,8,9,10};
clrscr();
int max=0;

for(i=0;i<=9;i++)
{
if(A[i]>max)
{
max=A[i];
}
}
printf("%d",max);
getch();
}