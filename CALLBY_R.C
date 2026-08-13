#include<stdio.h>
#include<conio.h>
void swap(int*,int*);

main()
{
clrscr();
int a,b;
printf("Enter no.=\n");
scanf("%d%d",&a,&b);
swap(&a,&b);
getch();
}
void swap(int *c,int *d)
{
int temp;
temp=*c;
*c=*d;
*d=temp;
printf("Nos after swapping=\n%d\n%d",*c,*d);
}