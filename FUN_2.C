#include<stdio.h>
#include<conio.h>
void my(int ,int);

int main()
{
clrscr();
int a,b;
printf("\nEnter values=");
scanf("\n%d%d",&a,&b);
my(a,b);
getch();
}
void my(int c,int d)
{
int t;

t=c+d;
printf("\naddition=%d",t);
}