#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
char a[10];
int i,j;
printf("\nEnter input=");
scanf("%s",a);
for(j=0;a[j];j++);
printf("\nName in reverse order=");
for(i=j-1;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
