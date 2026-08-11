#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
char a;
printf("Enter char=");
scanf("%c",&a);
if(a=='r')
printf("\nColour is Red");
else if(a=='y')
printf("\nColour is Yellow");
else if(a=='b')
printf("\nColour is Black");
else if(a=='o')
printf("\nColour is Orange");
else if(a=='p')
printf("\nColour is pink");
else if(a=='n')
printf("\nColour is Navy blue");
else if(a=='v')
printf("\nColour is Violate");
else if(a=='g')
printf("\nColour is Green");
else
printf("\nno colour");
getch();
}