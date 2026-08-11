#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int a[3],i;
printf("\nEnter input =");
for(i=0;i<=2;i++)
{
scanf("\n%d",&a[i]);
}
for(i=0;i<=2;i++)
{
if(a[i]%2==0)
{
printf("\nEven no=%d",a[i]);
}
else
{
printf("\nOdd no=%d",a[i]);
}
}
getch();
}