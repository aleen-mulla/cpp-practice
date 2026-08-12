#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,b,temp;
printf("Enter values=");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\na=%d",a);
printf("\nb=%d",b);
getch();
}
