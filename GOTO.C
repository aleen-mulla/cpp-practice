#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();

int a,b,c;
printf("Enter values");
scanf("%d%d",&a,&b);
goto add;
add:
{
c=a+b;
printf("\nAddition=%d",c);
}

getch();
}