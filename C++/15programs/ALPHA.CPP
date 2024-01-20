#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[100],*ptr,*a[100],*t;
 int i,j,r=0;
 cout<<"Enter String\n";
 gets(str);

 ptr=strtok(str," ");
 while(ptr!=NULL)
 {
  a[r]=ptr;
  ptr=strtok(NULL," ");
  r++;
 }

 for(i=0;i<r-1;i++)
 {
  for(j=0;j<r-1-i;j++)
  {
   if(strcmp(a[j],a[j+1])>0)
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
  }
 }
 cout<<"Length in terms of words is:"<<r<<"\n";
 cout<<"Rearranged Sentence:\n";
 for(i=0;i<r;i++)
 {
  cout<<a[i]<<" ";
 }

 getch();
}












