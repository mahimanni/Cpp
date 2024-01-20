#include<iostream.h>
#include<conio.h>
struct detail
{
  char name[10],address[10];
};
struct Money
{
 int m,p;
};
void add(struct Money M1,struct Money M2);

class stu
{
  struct detail arr[100];
  struct Money a[10],b[10];
  int i,j,n;

  public:
  void in();
  void out();
  void add(struct Money M1,struct Money M2);
};

 void stu::in()
  {
  cout<<"Enter the number of entries:\n";
  cin>>n;
  for(i=0;i<n;i++)
   {
    cout<<"\nENTER THE NAME:";
    cin>>arr[i].name;
    cout<<"\nENTER THE ADDRESS:";
    cin>>arr[i].address;
    cout<<"\nENTER MONEY";
    cin>>a[i].m>>a[i].p;
    cout<<"\nENTER MONEY";
    cin>>b[i].m>>b[i].p;
   }
  }
  void stu::out()
  {
  for(i=0;i<n;i++)
   {
    cout<<"\nNAME:";
    cout<<arr[i].name;
    cout<<"\nADDRESS:";
    cout<<arr[i].address;
    cout<<"\nTotal money:";
    add(a[i],b[i]);
    cout<<endl;
   }
  }

void stu::add(struct Money M1,struct Money M2)
{
 int m,p;
 m=M1.m+M2.m;
 p=M1.p+M2.p;

 while(p>99)
 {
  m++;
  p=p-100;
 }
 cout<<m<<"\t"<<p;
}
void main()
{
  clrscr();
  stu obj;
  obj.in();
  obj.out();
  getch();
}