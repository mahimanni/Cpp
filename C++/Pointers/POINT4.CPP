#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

void main()
{
 int a[5]={1,2,3,4,5};
 int *p=&a[1];
 printf("First element:%d%d\n",a[0],p[-1]);
 printf("Second element:%d%d\n",a[3],p[2]);
 getch();
}