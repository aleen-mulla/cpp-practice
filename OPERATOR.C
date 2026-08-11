#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a,b,c;
char o;
printf("Enter nos=");
scanf("%d%d",&a,&b);
printf("Enter Operator=");
fflush(stdin);
scanf("%c",&o);

if(o=='+')
{
c=a+b;
printf("Addition=%d",c);
}
else if(o=='-')
{
c=a-b;
printf("Subtraction=%d",c);
}
else if(o=='*')
{
c=a*b;
printf("multiplication=%d",c);
}
else if(o=='/')
{
if(b!= 0)
{
c=a/b;
printf("Division=%d",c);
}
else
printf("\nDivision is not possible");
}
else
{
printf("Sorry");
}
getch();
}
