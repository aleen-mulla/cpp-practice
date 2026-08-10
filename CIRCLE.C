#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
float r,a,c;
printf("Enter radius=");
scanf("%f",&r);
a=3.14*r*r;
c=2*3.14*r;
printf("\nArea=%.2f\nCircumference=%.2f",a,c);
getch();
}