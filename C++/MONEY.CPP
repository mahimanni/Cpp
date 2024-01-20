#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

struct  Money
{
 int m,p;
};
void add(struct Money M1,struct Money M2);

void main()
{
 struct Money a,b;
 clrscr();
 cout<<"Enter money\n";
 cin>>a.m>>a.p;

 cout<<"Enter money\n";
 cin>>b.m>>b.p;

 add(a,b);
 getch();
}

void add(struct Money M1,struct Money M2)
{
 int m,p;
 m=M1.m+M2.m;
 p=M1.p+M2.p;

 while(p>99)
 {
  m++;
  p=p-100;
 }
 cout<<m<<"\t"<<p;
}