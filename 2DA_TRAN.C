#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int a[2][2],i,j;
printf("\nEnter input=");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nBefore Transpose=\n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
printf("\nAfter Transpose=\n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
printf("\t%d",a[j][i]);
}
printf("\n");
}
getch();
}
