#include<stdio.h>
#include<conio.h>
void my();

int main()
{
clrscr();
my();
getch();
}
void my()
{
int a,b,c;
printf("\nEnter values=");
scanf("\n%d%d",&a,&b);
c=a+b;
printf("\naddition=%d",c);
}