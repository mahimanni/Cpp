#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

class numbers
{
  int armstrong(int n)
  {
   int a,s=0,m;
   m=n;
   while(n>0)
   {
    a=n%10;
    s=s+(a*a*a);
    n=n/10;
   }
   if(m==s)
   return(1);
   else
   return(0);
  }
};