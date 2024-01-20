#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s[10],a,b,c;
  int i,j,k;
  clrscr();
  cout<<"Input word:\n";
  gets(s);

  cout<<"Anagrams are:\n";
  for(i=0;i<3;i++)
  {
      a=s[i];
   for(j=0;j<3;j++)
   {
      b=s[j];
    for(k=0;k<3;k++)
    {
      c=s[k];
      if((i!=j)&&(j!=k)&&(i!=k))
      cout<<a<<b<<c<<endl;
    }
   }
  }
  getch();
}











