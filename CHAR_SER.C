#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
clrscr();
char a[10],b;
int i;
printf("Enter word=\n");
scanf("\n%s",&a);
printf("\nEnter character to search=\n");
fflush(stdin);
scanf("%c",&b);
for(i=0;a[i];i++)
{
if(b==a[i])
{
printf("\nFound");
getch();
exit(0);
}
}
printf("\nNot found");
getch();
}