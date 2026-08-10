#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,b,c,d,e,t,p;;
printf("enter 5 subject marks out of 50=");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
t=a+b+c+d+e;
p=t*100/250;
printf("\nTotal=%d\nPercentage=%d",t,p);
getch();
}