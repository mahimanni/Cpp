#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
 int i,j,k=0,x,y,l,c=0,d,e,r=0;
 char u[40],a[20],b[20],s[40],s1[40];
 clrscr();

 cout<<"Enter the number of element in set A:\n";
 cin>>x;
 cout<<"Enter the elements of set A\n";

 for(i=0;i<x;i++)
 {
  cin>>a[i];
 }

 cout<<"Enter the number of element in set B:\n";
 cin>>y;
 cout<<"Enter the elements of set B\n";

 for(i=0;i<y;i++)
 {
  cin>>b[i];
 }

 for(j=0;j<x;j++)
 {
 u[j]=a[j];
 }
 for(j=0;j<y;j++)
 {
  u[j+x]=b[j];
 }

 cout<<"Elements after merging:\n";
 for(i=0;i<x+y;i++)
 {
  cout<<u[i]<<endl;
 }
 getch();

 cout<<"Union of sets are:\n";
 for(i=0;i<x+y;i++)
 {
    e=0;
  for(j=i+1;j<x+y;j++)
  {
   if(u[i]==u[j])
   e=1;
  }
  if(e!=1)
  {
   cout<<u[i]<<endl;
   s[k]=u[i];
   k++;
  }
 }

 cout<<"Intersection of sets are:\n";
 for(i=0;i<x;i++)
 {
  for(j=0;j<y;j++)
  {
   if(a[i]==b[j])
   {
    cout<<a[i]<<endl;
    c=1;
   }
  }
 }
 if(c==0)
 cout<<"There is no element common\n";

 cout<<"Elements of A-B are:\n";
  for(i=0;i<x;i++)
 {
    d=0;
  for(j=0;j<y;j++)
  {
   if(a[i]==b[j])
    d=1;
  }
  if(d!=1)
  cout<<a[i]<<endl;
 }
 getch();

 for(i=97;i<=122;i++)
 {
  for(j=0;j<k;j++)
  {
   if(s[j]==i)
   {
    s1[r]=s[j];
    r++;
   }
  }
 }
 cout<<"Elements after sorting are:\n";
 for(i=0;i<r;i++)
 cout<<s1[i]<<endl;

 getch();
}
