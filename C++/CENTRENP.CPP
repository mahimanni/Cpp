#include<iostream.h>
#include<conio.h>
void main()
{
char name[20];
int a,c=0,i,ch,m,n,s;
long pass;
clrscr();
gotoxy(25,12);
cout<<"Welcome to National PG College"<<endl;
cout<<"Enter Username:";

cin.getline(name,sizeof(name));
cout<<"Username is:"<<name<<endl;

cout<<"Enter password:";
cin>>pass;
while(pass>0)
{
a=pass%10;
c++;
pass=pass/10;
}
for(i=0;i<c;i++)
cout<<"*";

getch();
clrscr();
gotoxy(30,13);
cout<<"Menu Driven Program";
cout<<"\nEnter 1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n";
cin>>ch;
cout<<"Enter two numbers"<<endl;
cin>>m>>n;
switch(ch)
{
  case 1:
  {
	  s=m+n;
	  cout<<"ADDITION IS:"<<s;
	  break;
  }
   case 2:
  {
	  s=m-n;
	  cout<<"SUBTRACTION IS:"<<s;
	  break;
  }
   case 3:
  {
	  s=m*n;
	  cout<<"MULTIPLICATION IS:"<<s;
	  break;
  }
   case 4:
  {
	  s=m/n;
	  cout<<"DIVISION IS:"<<s;
	  break;
  }
   default:
  {
	  cout<<"WRONG CHOICE";
	  break;
  }
}
getch();
}