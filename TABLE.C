#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,i;
printf("Enter value");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
printf("\n%d",a*i);
}
getch();
}