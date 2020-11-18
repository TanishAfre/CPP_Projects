#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
void list();
void booking();
struct number
{
 char ch[11];
};
struct pass {
 char name[50],airlines[50],depart[30],arrive[30],date[30];
 number regis;
 };
struct date1
{char mon[10];
int day,year;
}d;
void main()
{
int choice;
clrscr();
cout<<"\n\n\n\n______________________________=__ETHIHAD
AIRWAYS__=_____________________________\n\n\n\n";
cout<<"\n\t\t 1. Book tickets.";
cout<<"\n\t\t 2. List of places.";
cout<<"\n\t\t 3. Exit";
cout<<"\n \t\tEnter your choice: ";
cin>>choice;
if(choice>3)
{
cout<<"wrong choice!";
}
else
switch (choice)
{
case 1:booking();break;
case 2:list();break;
case 3:exit(0);break;
}
getch();
}
void booking()
{ clrscr();
pass p1;
number n1;
int seat;
cout<<"Enter Your Name: ";
gets(p1.name);
cout<<"enter your desired your seat number";
cin>>seat;
if(seat>=100)
{
cout<<"sorry! seats not available";
}
else
{
cout<<"Enter the date of journey (DD/MM/YYYY)";
gets(p1.date);
cout<<"Enter your airline: ";
gets(p1.airlines);
cout<<"Enter your destination: ";
gets(p1.depart);
cout<<"Enter your boarding place: ";
gets(p1.arrive);
n1.ch[0]=p1.airlines[0];
 n1.ch[1]=p1.airlines[1];
 n1.ch[2]=p1.airlines[2];
 n1.ch[3]=p1.airlines[3];
 n1.ch[4]=p1.depart[0];
 n1.ch[5]=p1.depart[1];
 n1.ch[6]=p1.depart[2];
 n1.ch[7]=p1.arrive[0];
 n1.ch[8]=p1.arrive[1];
 n1.ch[9]=p1.arrive[2];
 n1.ch[10]='\0';
clrscr();
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n\n"<<"\t\t\tBOARDING PASS\n\n"<<endl;
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\t\t\t"<<p1.airlines<<endl;
cout<<"\t\t\t"<<n1.ch[7]<<n1.ch[8]<<n1.ch[9]<<"--
>"<<n1.ch[4]<<n1.ch[5]<<n1.ch[6]<<endl;
cout<<"\t\t\tPNR:"<<n1.ch<<"\t\tSeat Number: "<<seat<<endl;
cout<<"\t\t\tName: "<<p1.name<<endl;
cout<<"\t\t\tAirlines: "<<p1.airlines<<endl;
cout<<"\t\t\tTime "<<p1.date<<endl;
cout<<"\t\t\tTravelling from: "<<p1.arrive<<endl;
cout<<"\t\t\tTo: "<<p1.depart<<endl;
getch();
}
}
void list()
{
clrscr();
cout<<"\n1.Mumbai to Delhi";
cout<<"\n2.Mumbai to Agra";
cout<<"\n3.Mumbai to Sikkim";
cout<<"\n4.Mumbai to Chennai";
cout<<"\n5.Mumbai to Hyderabad";
cout<<"\n6.Mumbai to Cochin";
cout<<"\n7.Mumbai to Jaipur";
cout<<"\n8.Mumbai to Gandhinagar";
cout<<"\n9.Delhi to Mumbai";
cout<<"\n10.Agra to Mumbai";
cout<<"\n11.Sikkim to Mumbai";
cout<<"\12.Chennai to Mumbai";
cout<<"\n13.Hyderabad to Mumbai";
cout<<"\n14.Cochin to Mumbai";
cout<<"\n15.Jaipur to Mumbai";
cout<<"\n16.Gandhinagar to Mumbai";
char a;
cout<<"\nEnter 'y' to book ticket and 'n' to exit"<<endl;
cin>>a;
if (a=='y'||a=='Y')
booking();
else if(a=='n'||a=='N')
exit(0);
getch();
}
