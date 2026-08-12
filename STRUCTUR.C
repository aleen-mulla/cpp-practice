#include<stdio.h>
#include<conio.h>
struct std
{
public:
int r;
char n[10];
int p;
};
int main()
{
clrscr();
int i;
struct std a[3];
printf("\nEnter roll no.=");
for(i=0;i<=2;i++)
{
scanf("%d",&a[i].r);
}
printf("\nEnter names=");
for(i=0;i<=2;i++)
{
scanf("%s",&a[i].n);
}
printf("\nEnter percentage=");
for(i=0;i<=2;i++)
{
fflush(stdin);
scanf("%d",&a[i].p);
}
printf("\n--------------------------------------------------------------------\n");
printf("\nRoll no.   Name\tpercentage\n");
for(i=0;i<=2;i++)
{
printf("%d",a[i].r);
printf("\t%s",a[i].n);
printf("\t%d",a[i].p);
printf("\n");
}
getch();
}
