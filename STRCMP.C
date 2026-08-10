#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
clrscr();
char a[10],b[10];
printf("enter names=");
scanf("%s%s",a,b);
if(strcmp(a,b)==0)
printf("\nNames are matching");
else
printf("\nNames are not matching");
getch();
}