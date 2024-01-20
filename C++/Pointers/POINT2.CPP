#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

void main()
{
 int a;
 int *p=&a;
 int *q=&a;
 int *r=&a;

 printf("Enter integer:");
 scanf("%d",&a);

 printf("%d",&a);
 printf("%d\n",*p);
 printf("%d\n",*q);
 printf("%d\n",*r);

 getch();
 }