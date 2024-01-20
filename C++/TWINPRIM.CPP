#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
int prime(int n)
{
int i,c=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
c++;
}
if(c==2)
return 1;
else
return 0;
}
void show(int start,int end)
{
int j,p,q;
for(j=start;j<=end-2;j++)
{
p=prime(j);
q=prime(j+2);
if((p==1)&&(q==1))
cout<<j<<","<<(j+2)<<endl;
}
}
void main()
{
int s,e;
clrscr();
cout<<"Enter start and end value"<<endl;
cin>>s>>e;
show(s,e);
getch();
}
