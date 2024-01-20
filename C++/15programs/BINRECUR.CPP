#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
int f=0;
int binary(char a[],int start,int end,int n)
{
  int mid,pos;
  mid=(start+end)/2;
  if(start>end&&f==0)
  {
    return 0;
  }
  else if(a[mid]==n)
  {
    pos=mid+1;
    f=1;
   return(pos);
  }
  else if(a[mid]>n)
  {
   return(a,start,mid-1,n);
  }
  else if(a[mid]<n)
  {
   return(a,mid+1,end,n);
  }
}
void main()
{
 int l,m,r,i;
 char b[100];//open your eyes while declaring data types
 clrscr();
 cout<<"Enter length of array:\n";
 cin>>l;
 cout<<"Enter array in sorted order:\n";
 for(i=0;i<l;i++)
 {
  cin>>b[i];
 }
 cout<<"Enter the element to be searched:\n";
 cin>>m;
 r=binary(b,0,l-1,m);

 if(r==0)
 cout<<"\nElement not found";
 else
 cout<<"\nElement found at "<<r<<" position";
 getch();
}











