#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
   int z[5]={1,2,3,4,5};
   int *ip=z;
   int *iq=z;
   int i;
   clrscr();

  for(i=0;i<5;i++)
  {
   cout<<"\n*ip="<<*ip;
   ip=ip+1;
  }

  cout<<endl;

  for(i=0;i<5;i++)
  {
   cout<<"\n*iq="<<*(iq+i);
   iq=iq+1;
  }
  getch();
}