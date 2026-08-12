#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
clrscr();
char a[10],b,c;
int i;
printf("Enter word=\n");
scanf("\n%s",&a);
printf("\nEnter old char. and new char=\n");
fflush(stdin);
scanf("%c",&b);
fflush(stdin);
scanf("%c",&c);
for(i=0;a[i];i++)
{
if(b==a[i])
{
a[i]=c;
}
}
printf("\n%s",a);
getch();
}