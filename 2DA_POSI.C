#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int a[2][2],b[2][2],c[2][2],i,j;
printf("1st array=");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("\n%d",&a[i][j]);
}
}
printf("\n2 nd array=");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("\n%d",&b[i][j]);
}
}
printf("\n");
printf("\nPositionwise addition=\n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("\t%d",c[i][j]);
}
printf("\n");
}
getch();
}
