#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int u,b;
printf("Enter units consumed=");
scanf("%d",&u);

if(u<=100)
{
b=u*10+100;
printf("bill =%d",b);
}
else if(u<=200 && u>100)
{
b=100+100*10+(u-100)*20;
printf("bill =%d",b);
}
else if(u>=200)
{
b=100+100*10+100*20+(u-200)*30;
printf("bill =%d",b);
}
getch();
}