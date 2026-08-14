#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
clrscr();
int *a;
a=(int*)calloc(5,sizeof(int));
for(int i=0;i<5;i++)
{
printf("\t%d",a[i]);
}
free(a);
getch();
}

