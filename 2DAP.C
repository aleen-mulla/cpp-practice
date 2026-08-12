#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int i,a[2][2],*b,j;
printf("Enter values=");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
b=&a[0][0];
printf("\nOutput");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("\t%d",*b);
b++;
}
printf("\n");
}
getch();
}