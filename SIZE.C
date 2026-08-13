#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int *p,q=10;
p=&q;
printf("%d",q);
printf("\nsize of q=%d bytes\n",sizeof(q));
printf("\nsize of p=%d bytes\n",sizeof(*p));
getch();
}

