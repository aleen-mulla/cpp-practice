#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
clrscr();
char a[10],b[10];
printf("enter name=");
scanf("%s",a);
printf("\nname=%s",strcpy(b,a));
getch();
}