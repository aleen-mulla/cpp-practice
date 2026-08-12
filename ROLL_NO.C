#include<stdio.h>
#include<conio.h>

struct std
{
public:
int i,c,b;
char n[10];
};

int main()
{
clrscr();
int i,c,b;
struct std a[10];
printf("\nEnter no of students");
scanf("%d",&c);
printf("Enter roll no=");
for(i=0;i<c;i++)
{
scanf("%d",&a[i].b);
}
printf("\nEnter names");
for(i=0;i<c;i++)
{
scanf("%s",&a[i].n);
}
printf("\nRoll no\t\tName");
for(i=0;i<c;i++)
{
printf("\n%d",a[i].b);
printf("\t\t%s",a[i].n);
}
getch();
}








