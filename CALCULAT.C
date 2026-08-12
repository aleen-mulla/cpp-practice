#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
clrscr();
int a,b,i,d;
char o,n;
printf("Enter how many times you want to run the program=");
scanf("%d",&d);
for(i=0;i<d;i++)
{
printf("\nEnter nos.=");
scanf("\n%d%d",&a,&b);
printf("\nenter operator=");
fflush(stdin);
scanf("%c",&o);
if(o=='+')
printf("Addition=%d",a+b);
else if(o=='-')
printf("subtraction=%d",a-b);
else if(o=='*')
printf("Multiplication=%d",a*b);
else if(o=='/')
{
if(b!=0)
printf("=%d",a-b);
else
printf("\nDivision is not possible");
}
else
printf("\nSorry");
printf("\nYou want to continue :y or n\n");
fflush(stdin);
scanf("%c",&n);
if(n=='y')
{
continue;
}
else
{
printf("\nStop");
getch();
exit(0);
}
}
getch();
}


