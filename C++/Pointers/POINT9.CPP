#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
 int a[5];
 void MinMax(int *,int,int *,int *);
 int i,max,min;
 for(i=0;i<5;i++)
 {
  cout<<"Enter number:"<<i+1;
  cin>>a[i];
 }
 MinMax(a,5,&min,&max);
 getch();
}