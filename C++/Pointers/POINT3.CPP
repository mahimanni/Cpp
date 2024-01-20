#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5]={1,2,3,4,5};
  clrscr();
  int *p=a;
  printf("%p%p\n",&a[0],a);
  printf("%d%d\n",*a,*p);




getch();
}