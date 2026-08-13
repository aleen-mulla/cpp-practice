#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int a[2][2][2],i,j,k;
printf("Enter values=");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
scanf("\n%d",&a[i][j][k]);
}
}
}
printf("\nElements of 3D array are\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
printf("\t%d",a[i][j][k]);
}
printf("\n");
}
printf("\n");
}
getch();
}