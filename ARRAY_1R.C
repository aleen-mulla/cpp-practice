#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int a[3],i,n;
printf("\nenter values\n");
for(i=0;i<=2;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=2;i++)
{
n=a[i]-1;
printf("\n%d",n);
}
getch();
}