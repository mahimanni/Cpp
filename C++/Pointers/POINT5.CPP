#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


void main()
{
int a=10,b=20,z;
int *x=&a;
int *y=&b;
cout<<"x is:"<<x;
z=*x+*y;

cout<<"Sum is:"<<z;
cout<<"Difference is:"<<*x-*y;
cout<<"Multiplication is:"<<*x**y;
cout<<"Division is:"<<*x/ *y;
getch();
}
