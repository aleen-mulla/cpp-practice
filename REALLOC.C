#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
clrscr();
int *a;
a=(int*)malloc(3*sizeof(int));
a[0]=10;
a[1]=20;
a[2]=30;
a=(int*)realloc(a,5*sizeof(int));
a[3]=40;
a[4]=50;
for(int i=0;i<5;i++)
{
printf("\n%d",a[i]);
}
free(a);
getch();
}

