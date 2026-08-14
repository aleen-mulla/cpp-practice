#include<stdio.h>
#include<conio.h>
#define FOUND printf("Virus\n");

main()
{
clrscr();
char signature='y';
if(signature=='y')
{
FOUND;
}
else
printf("safe");
getch();
}