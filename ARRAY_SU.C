#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int a[3],i,s=0;
printf("\nEnter input =");
for(i=0;i<=2;i++)
{
scanf("\n%d",&a[i]);
}
for(i=0;i<=2;i++)
{
s=s+a[i];
}
printf("\nAddition=%d",s);
getch();
}