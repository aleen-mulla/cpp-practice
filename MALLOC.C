#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
clrscr();
int n,i,*a;
printf("How many no you want to saw?\n");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
if(a==NULL)
{
printf("Memory allocation failed");
return 1;
}
printf("Enter %d elements=",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Array elements are\n");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
free(a);
getch();
}




















