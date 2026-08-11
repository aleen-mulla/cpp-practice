#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();

int a;
printf("\nEnter year=");
scanf("%d",&a);
if(a%4==0)
printf("\nYear is leap");
else
printf("\nno leap Year");
getch();
}