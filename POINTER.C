#include<stdio.h>
#include<conio.h>
struct std
{
public:
int a,b,c;
};


int main()
{
clrscr();-
struct std k,*m;
printf("Enter values=");
scanf("%d%d",&k.a,&k.b);
m=&k;
(*m).c=(*m).a+(*m).b;
printf("\nAddition=%d",(*m).c);
getch();
}
