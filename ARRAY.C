#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a[10][10],i,r,c,j;
printf("\nEnter rows and columns Respectivly");
scanf("\n%d%d",&r,&c);
printf("Enter values for array");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("\n%d",&a[i][j]);
}
}
printf("\nOutput=\n");
printf("\na[%d][%d]array",r,c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
getch();
}