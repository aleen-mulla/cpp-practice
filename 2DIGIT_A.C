#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,b,c,s;
printf("Enter two digit no.=");
scanf("%d",&a);
b=a%10;
c=a/10;
s=b+c;
printf("addition=%d",s);
getch();
}