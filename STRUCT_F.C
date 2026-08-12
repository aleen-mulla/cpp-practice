#include<stdio.h>
#include<conio.h>
struct std
{
public:
int a,b,c;
};
void my(struct std n);

main()
{
clrscr();
struct std n;
printf("\nEnter nos=");
scanf("%d%d",&n.a,&n.b);
my(n);
getch();
}
void my(struct std n)
{
n.c=n.a+n.b;
printf("Addition=%d",n.c);
}