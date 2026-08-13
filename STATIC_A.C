#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
static char a[3][20];
int i;
printf("Enter a word=");
for(i=0;i<=2;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<=2;i++)
{
printf("\n%s",a[i]);
}

getch();
}