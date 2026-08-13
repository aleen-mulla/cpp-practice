#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
int a[3],i,j,temp;
printf("Enter values=");
for(i=0;i<=2;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=2;i++)
{
for(j=i+1;j<=2;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<=2;i++)
{
printf("\n%d",a[i]);
}
getch();
}