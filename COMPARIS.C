#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,b,c;
printf("\nEnter input=");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("\n 1st no is greater");
else if(b>a && b>c)
printf("\n2nd no is greater");
else if(c>a && c>b)
printf("\n3rd no is greater");
else
printf("\nall 3 nos are equal");

getch();
}