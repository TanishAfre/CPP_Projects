#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
struct item
{
char name[50];
int no;
long int cost;
};
item
S[10]={{"Redbull",1,100},{"Shirt",2,50},{"Trouser",3,150},{"Beyblades",4,
20},{"Bhendi",5,20},{"Fruits",6,90},{"Guitar",7,4000},{"Pubg
PC",8,2000},{"Farewell 12th",9,200},{"RD.Sharma",10,400}};
void display();
void admin();
void customer();
void bill(int,int);
void billing();
void main()
{
clrscr();
display();
billing();
getch();
}
void display()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n";
cout<<"\t ************************************\n";
cout<<"\t * WELCOME TO COUNTER CORNER STORES *\n";
cout<<"\t ************************************\n";
cout<<"\t * 1) CUSTOMER BILLING. *\n";
cout<<"\t * 2) ADMIN. *\n";
cout<<"\t * 3) EXIT. *\n";
cout<<"\t ************************************\n";
int r;
cin>>r;
if(r==1)
customer();
else if(r==2)
admin();
else if(r==3)
exit(0);
else
cout<<"Invalid input!!!";
}
int t;
void customer()
{
clrscr();
int s,n;
char ch;
cout<<"SR.no NAME COST | SR.NO NAME COST";
cout<<"\n"<<S[0].no<<"\t"<<S[0].name<<"\t\t"<<S[0].cost<<"\t\t"<<S[1].no<<
"\t"<<S[1].name<<"\t\t"<<S[1].cost;
cout<<"\n"<<S[2].no<<"\t"<<S[2].name<<"\t\t"<<S[2].cost<<"\t\t"<<S[3].no<<
"\t"<<S[3].name<<"\t"<<S[3].cost;
cout<<"\n"<<S[4].no<<"\t"<<S[4].name<<"\t\t"<<S[4].cost<<"\t\t"<<S[5].no<<
"\t"<<S[5].name<<"\t\t"<<S[5].cost;
cout<<"\n"<<S[6].no<<"\t"<<S[6].name<<"\t\t"<<S[6].cost<<"\t\t"<<S[7].no<<
"\t"<<S[7].name<<"\t\t"<<S[7].cost;
cout<<"\n"<<S[8].no<<"\t"<<S[8].name<<"\t"<<S[8].cost<<"\t\t"<<S[9].no<<"\
t"<<S[9].name<<"\t"<<S[9].cost;
cout<<"\nNo. of items you are going to buy?";
cin>>t;
while(ch!='y')
{
 cout<<"\nEnter item number";
 cin>>s;
 cout<<"\nEnter quantity";
 cin>>n;
 bill(s,n);
 cout<<"\nHogaya? ^o^ (y/n)";
 cin>>ch;
}
}
int i=0;
item R[50];
void bill(int s,int n)
{
R[i]=S[s-1];
R[i].cost=S[s-1].cost*n;
i++;
}
void admin()
{
clrscr();
char v;
cout<<"SR.no NAME COST | SR.NO NAME COST";
cout<<"\n"<<S[0].no<<"\t"<<S[0].name<<"\t\t"<<S[0].cost<<"\t\t"<<S[1].no<<
"\t"<<S[1].name<<"\t\t"<<S[1].cost;
cout<<"\n"<<S[2].no<<"\t"<<S[2].name<<"\t\t"<<S[2].cost<<"\t\t"<<S[3].no<<
"\t"<<S[3].name<<"\t"<<S[3].cost;
cout<<"\n"<<S[4].no<<"\t"<<S[4].name<<"\t\t"<<S[4].cost<<"\t\t"<<S[5].no<<
"\t"<<S[5].name<<"\t\t"<<S[5].cost;
cout<<"\n"<<S[6].no<<"\t"<<S[6].name<<"\t\t"<<S[6].cost<<"\t\t"<<S[7].no<<
"\t"<<S[7].name<<"\t\t"<<S[7].cost;
cout<<"\n"<<S[8].no<<"\t"<<S[8].name<<"\t"<<S[8].cost<<"\t\t"<<S[9].no<<"\
t"<<S[9].name<<"\t"<<S[9].cost;
cout<<"\nPress s to continue shopping or any key to have your invoice
o_o";
cin>>v;
if(v=='s')
display();
}
void billing()
{
clrscr();
long int sum=0;
cout<<"\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
cout<<"\nX SR.no NAME COST X";
cout<<"\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
for(i=0;i<t;i++)
{
cout<<"\n\n\t\t\t "<<R[i].no<<"\t"<<R[i].name<<"\t\t"<<R[i].cost;
}
for(i=0;i<t;i++)
{
sum=sum+R[i].cost;
}
cout<<"\n\n\t\t\t Your grand total is: "<<sum;
cout<<"\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
cout<<"\n\n\t\t\tThank you for shopping with us ";
}