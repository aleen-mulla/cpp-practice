#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
clrscr();
static char a[3][20];
char b[20];
int i;
printf("Enter a words=");
for(i=0;i<=2;i++)
{
scanf("%s",a[i]);
}
printf("Enter name to search=");
scanf("%s",b);
for(i=0;i<=2;i++)
{
if(strcmp(a[i],b)==0)
{
printf("\nFound");
getch();
exit(1);
}
}
printf("\nNot found");
getch();
}