#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("\nEnter Input=");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("\n1st number is greater");
}
else if(b>a)
printf("\n2nd number is greater");
}
else
{
printf("\nBoth numbers are equal");
}
getch();
}
