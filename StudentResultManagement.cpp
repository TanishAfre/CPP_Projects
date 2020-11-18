#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<iomanip.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<ctype.h>
#include<graphics.h>
class Student
{
 int admno;
 float marksp,marksc,marksm,markse,markscs,sum,avg;
 char name[50];
public:
 void EnterData()
 {
cout<<"\nEnter student details: "<<endl;
cout << "Admission no: ";
 cin >> admno;
cout << "Name: ";
gets(name);
cout<<"\nMarks:- ";
cout<<"\nPhysics: ";
cin>>marksp;
cout<<"Chemistry: ";
cin>>marksc;
cout<<"Maths: ";
cin>>marksm;
cout<<"English: ";
cin>>markse;
cout<<"Computer Science: ";
cin>>markscs;
 }
 void showData()
 {
cout << "\n\n\nAdmission no. : " <<admno;
cout << "\nStudent Name : " <<name;
cout << "\nStudent Marks : ";
cout<<"\nPhysics: "<<marksp;
cout<<"\nChemistry: "<<marksc;
cout<<"\nMaths: "<<marksm;
cout<<"\nEnglish: "<<markse;
cout<<"\nComputer Science: "<<markscs;
sum=marksp+marksc+marksm+markse+markscs;
cout<<"\nSUM= "<<sum;
avg=sum/5;
cout<<"\nAVERAGE= "<<avg;
getch();
 }
 int retAdmno()
 {
 return admno;
 }
};
// function to write in a binary file.
void write_record()
{
 ofstream outFile;
 char ans='y';
 outFile.open("student.dat", ios::binary | ios::app);
 Student S;
 while(ans=='y' || ans=='Y')
 {
 S.EnterData();
 outFile.write((char*)&S, sizeof(S));
 cout<<"\nWant to enter more ? (y/n)..";
 cin>>ans;
 }
 outFile.close();
}
// function to display records of file
void display()
{
 ifstream inFile;
 inFile.open("student.dat", ios::binary);
 Student S;
 while(inFile.read((char*)&S, sizeof(S)))
 {
 S.showData();
 }

 inFile.close();
}
// function to search and display from binary file
void search(int n)
{
 ifstream inFile;
 inFile.open("student.dat", ios::binary);
 Student obj;
 while(inFile.read((char*)&obj, sizeof(obj)))
 {
if(obj.retAdmno()==n)
 {
 obj.showData();
 }
 }

 inFile.close();
}
// function to delete a record
void delete_record(int n)
{
 Student obj;
 ifstream inFile;
 inFile.open("student.dat", ios::binary);
 ofstream outFile;
 outFile.open("temp.dat", ios::out | ios::binary);
 while(inFile.read((char*)&obj, sizeof(obj)))
 {
 if(obj.retAdmno() != n)
 {
 outFile.write((char*)&obj, sizeof(obj));
 }
 }
 inFile.close();
 outFile.close();

 remove("student.dat");
 rename("temp.dat", "student.dat");
}
// function to modify a record
void modify_record(int n)
{
 fstream file;
 file.open("student.dat",ios::in | ios::out | ios::binary);
 Student obj;
 while(file.read((char*)&obj, sizeof(obj)))
 {
if(obj.retAdmno() == n)
{
 file.seekg(0,ios::cur);
 cout << "\nEnter the new details of student";
 obj.EnterData();
 int pos;
 pos=file.tellg() - sizeof(obj);
 file.seekp(pos);
 file.write((char*)&obj, sizeof(obj));
}
 }
 file.close();
}
void main()
{
 Student obj;
 clrscr();
 int choice;
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
errorcode = graphresult();
rectangle(10,150,635,300);
settextstyle(4, HORIZ_DIR, 4);
outtextxy(120, 200,"LEARN GLOBAL SCHOOL");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(getmaxx()-450,getmaxy()-90,"Welcome. Press any
key to continue ...");
getch();
cleardevice();
closegraph();
 int x;
 int n;
 int a,m,d;
 s: clrscr();
 cout<<"\n\nSelect one option..."<<endl;
 cout<<"\n1.Enter Record\n2.Display
Record\n3.Search\n4.Modify\n5.Delete Record\n6.Close
Application "<<endl;
 cin>>n;
 if(n==1)
 {
 clrscr();
 write_record();
 cout<<"\nEnter 0 to go to main menu and any other key to
exit....";
 cin>>x;
 if(x==0)
 goto s;
 else
 exit(1);
 }
 else if(n==2)
 {
 clrscr();
 cout << "\n********************************DISPLAY
RECORDS********************************";
 display();
 cout<<"\nEnter 0 to go to main menu and any other key to
exit....";
 cin>>x;
 if(x==0)
 goto s;
 else
 exit(0);
 }
 else if(n==3)
 {
 clrscr();
 cout << "\n*********************************SEARCH
RECORD*********************************";
 cout<<"\n\nEnter the student's Admission number you wish
to search: "<<endl;
 cin>>a;
 search(a);
 cout<<"\nEnter 0 to go to main menu and any other key to
exit....";
 cin>>x;
 if(x==0)
 goto s;
 else
 exit(0);
 }
 else if(n==4)
 { clrscr();
 cout<<"\n**********************************MODIFY
RECORD********************************";
 cout<<"\nEnter the student's admission number you wish to
modify: "<<endl;
 cin>>m;
 cout << "\nMODIFY RECORD "<<m;
 modify_record(m);
 cout<<"\nEnter 0 to go to main menu and any other key to
exit....";
 cin>>x;
 if(x==0)
 goto s;
 else
 exit(0);
 }
 else if(n==5)
 { clrscr();
 cout<<"\n**********************************DELETE
RECORD*********************************";
 cout<<"\nEnter the student's admission number you wish to
delete: "<<endl;
 cin>>d;
 delete_record(d);
 cout << "\nRecord Deleted";
 cout<<"\nEnter 0 to go to main menu and any other key to
exit....";
 cin>>x;
 if(x==0)
 goto s;
 else
 exit(0);
 }
 else
 { cout<<"\nPress any key to EXIT......"<<endl;
 getch();
 }
 getch();
}