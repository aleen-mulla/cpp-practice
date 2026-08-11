#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();

int a;
printf("\nEnter number=");
scanf("%d",&a);
if(a%2==0)
printf("\nno. is even");
else
printf("\nno. is odd");
getch();
}