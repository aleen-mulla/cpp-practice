#include<stdio.h>
#include<conio.h>
int my(int ,int);

int main()
{
clrscr();
int a,b,t;
printf("\nEnter values=");
scanf("\n%d%d",&a,&b);
t=my(a,b);
printf("\naddition=%d",t);
getch();
}
int my(int c,int d)
{
return c+d;
}