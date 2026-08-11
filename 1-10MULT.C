#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int i,s=0,a;

for(i=1;i<=10;i++)
{
printf("\n%d",i);
s=s+i;
}
printf("\nsum=%d",s);
for(a=s;a<=10*s;a=a+s)
{
printf("\n%d",a);
}
getch();
}