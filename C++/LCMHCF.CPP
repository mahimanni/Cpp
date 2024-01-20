#include<iostream.h>
#include<conio.h>
int m=0;
int lcm(int a,int b)
 {
  m=m+b;
  if(m%a==0&&m%b==0)
  return(m);
  else
  return(lcm(a,b));
 }
 int hcf(int x,int y)
 {
 int z;
 if(x>y)
 {
 z=x;
 x=y;
 y=z;
 }
 if(y%x==0)
 return(x);
 else
 return(hcf(y%x,x));
 }
  void main()
  {
  int l,p,q,h;
  clrscr();
  cout<<"Enter two numbers"<<endl;
  cin>>p>>q;
  l=lcm(p,q);
  h=hcf(p,q);
  cout<<"Lcm is:"<<l<<endl;
  cout<<"Hcf is:"<<h<<endl;
  getch();
  }

