#include<stdio.h>
#include<conio.h>

struct numbers
{
public:
int a,b,c;
};
struct result
{
struct numbers n;
};
int main()
{
clrscr();
struct result r;
printf("\nenter no=");
scanf("%d%d",&r.n.a,&r.n.b);
r.n.c=r.n.a*r.n.b;
printf("Multiplication=%d",r.n.c);
getch();
}