
#include<conio.h>
#include<iostream.h>
int prime(int n)
{
int j,c=0;
for(j=1;j<=n;j++)
{
if(n%j==0)
c++;
}
if(c==2)
return(1);
else
return(0);
}
int fibo(int m)
{
int i,p=0,q=1,r,d;
for(i=3;i<=m;i++)
{
r=p+q;
d=prime(r);
if(d==1)
cout<<r<<endl;
p=q;
q=r;
}
}
void main()
{
int o;
clrscr();
cout<<"Enter term"<<endl;
cin>>o;
fibo(o);
getch();
}
