#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int a=10,*p,y;
clrscr();
p=&a;

cout<<"p is:"<<p;
p=p+10;
cout<<"\np=p+10="<<p;//p=p+10 is increment in address

p=&a;
*p=*p+10;
cout<<"\n*p is:"<<*p;

y=*p+1;//equivalent to y=a+1
cout<<"\ny=*p+1 is:"<<y;

*p+=1;//can be written as ++(*p) or (*p)++
cout<<"\n*p is:"<<*p;
cout<<"\n++(*p) is:"<<++(*p);
cout<<"\n(*p)++ is:"<<(*p)++;
getch();
}


