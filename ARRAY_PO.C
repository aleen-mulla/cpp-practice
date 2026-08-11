#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int i,a[3],b[3],c[3];
printf("\nEnter elements of 1st array =");
for(i=0;i<=2;i++)
{
scanf("\n%d",&a[i]);
}
printf("\nEnter elements of 2nd array =");
for(i=0;i<=2;i++)
{
scanf("\n%d",&b[i]);
}
printf("Positionwise addition");
for(i=0;i<=2;i++)
{
c[i]=a[i]+b[i];
printf("\n%d",c[i]);
}
getch();
}