#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int i,a[3];
printf("enter values=");
for(i=0;i<=2;i++)
{
scanf("%d",&a[i]);
}
printf("\nOutput=");
for(i=0;i<=2;i++)
{
printf("\n%d",*(a+i));
}
getch();
}