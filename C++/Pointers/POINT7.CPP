#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
 int z[2]={1,3};
 clrscr();
 int *ip=z;
 printf("%p\n",ip);
 printf("%d\n",*ip);
 printf("%d\n",++(*ip));
 printf("%p\n",ip);
 ip=ip+1;
 printf("%d\n",*ip);
 printf("%p\n",ip);
 getch();
}