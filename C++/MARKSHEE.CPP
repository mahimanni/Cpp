#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
class ms
{
    int m1,m2,m3,m4,m5,m6,t;
    double n;
    float sgpa;
    char s[20],s1[20],s2[20];
public:
char grade(int m)
{
  if(m>85)
  return('Ap');
  else if(m>75&&m<=85)
   return('A');
 // cout<<"A";
  else if(m>65&&m<=75)
   return('B');
 // cout<<"B+";
  else if(m>55&&m<=65)
   return('B');
 // cout<<"B";
  else if(m>45&&m<=55)
   return('C');
 // cout<<"C";
  else
   return('D ');
 // cout<<"D";
}
char tgrade(int total)
{
   if(total>470)
   return('A');
   else if(total>350&&total<=470)
   return('B');
   else if(total>250&&total<=350)
   return('C');
   else if(total>150&&total<=265)
   return('D');
   else
   return('F');
}
void in()
{
    cout<<"Enter roll no";
    cin>>n;
    cout<<"Enter marks of 101,102,103,104,105,106 subject";
    cin>>m1>>m2>>m3>>m4>>m5>>m6;
    cout<<"Enter your name";
   // cin>>s[20];
   gets(s);
    cout<<"Enter father name";
   // cin>>s1[20];
   gets(s1);
    cout<<"Enter mother name";
   // cin>>s2[20];
   gets(s2);
    t=m1+m2+m3+m4+m5+m6;
    sgpa=((m1*4)+(m2*4)+(m3*4)+(m4*4)+(m5*4)+(m6*4))/24;
    clrscr();
  }
void marks()
{
  cout<<"NATIONAL POST GRADUATE COLLEGE"<<endl;
  cout<<"    An Autonomous and CPE College of"<<endl;
  cout<<"         University of Lucknow"<<endl;
  cout<<"________________________________________________________________________________\n";
  cout<<"                        STATEMENT OF MARKS\n";
  cout<<"________________________________________________________________________________\n";
  cout<<"Student Roll No           : "<<n<<endl;
  cout<<"Student Name              : "<<s<<endl;
  cout<<"Father Name/Mother name   : "<<s1<<"/"<<s2<<endl;
  cout<<"Examination Name/Year     : B.C.A.(SEMESTER-I)/DEC-2022\n";
  cout<<"________________________________________________________________________________\n";
  cout<<"Paper\tPaper Name\t\t\t\t\tTotal\tCredit\tGrade\n";
  cout<<"No   \t         \t\t\t\t\tMarks(100)\n";
  cout<<"________________________________________________________________________________\n";
  cout<<"101\tINFORMATION TECHNOLOGY AND APPLICATIONS            :"<<m1<<"\t4\t"<<grade(m1)<<endl;
  cout<<"102\tDISCRETE MATHEMATICAL STRUCTURE                    :"<<m2<<"\t4\t"<<grade(m2)<<"\n";
  cout<<"103\tDIGITAL ELECTRONICS                                :"<<m3<<"\t4\t"<<grade(m3)<<"\n";
  cout<<"104\tELEMENTS OF SYSTEM ANALYSIS AND DESIGN             :"<<m4<<"\t4\t"<<grade(m4)<<"\n";
  cout<<"105\tPROGRAMMING AND PROBLEM SOLVING THROUGH C LANGUAGE :"<<m5<<"\t4\t"<<grade(m5)<<"\n";
  cout<<"106\tPRACTICAL                                          :"<<m6<<"\t4\t"<<grade(m6)<<"\n";
  cout<<"\tTOTAL MARKS(MAX:600),CREDIT & AVERAGE GRADE        :"<<t<<"\t4\t"<<tgrade(t)<<"\n";
  cout<<"\tSGPA:"<<sgpa<<"\n";
  cout<<"\tRESULT:"<<tgrade(t)<<endl;
}
};

void main()
{
 clrscr();
 ms obj;
 obj.in();
 obj.marks();
 getch();
}







































