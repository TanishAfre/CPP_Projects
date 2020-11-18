#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<ctype.h>
#include<graphics.h>
#include<process.h>
struct newmember
  {
     int member_code;
     char dob[11],date[11];
     char name[20];
  };
int gi=74,cnti=0;
char book_title[][50]={"Harry Potter And The Philosopher's Stone" , "Harry Potter And The     Chamber Of Secrets","Harry Potter And The Prisoner Of Azkaban", "Harry Potter And The Goblet Of Fire", "Harry Potter And The Order Of The Phoenix","Harry Potter And The Half Blood Prince", "Harry Potter And The Deathly Hallows", "Harry Potter And The Cursed Child",
  "The Lion,the Witch and the Wardrobe", "Prince Caspian","The Voyage of the Dawn Treader","The Silver Chair","The Horse and His Boy","The Magician's Nephew","The Last Battle",  "New Moon","Twilight","Eclipse","Breaking Dawn", "The Hunger Games","Catching Fire","Mockingjay", "The Lightning Thief","The Sea of Monsters","The Titan's Curse","The Battle of Labyrinth","Last Olympian","Greek Gods","Agni Ki Udan(Dr. APJ Abdul Kalam)","Messi(Lionel Messi)","The Race Of My Life(Milkha Singh)","The Life Of Mahatma Gandhi","Long Walk To Freedom(Nelson Mandela)","I Am Malala(Malala Yousafzai)",
 "English-Wren & Martin","Science-Full Marks","Maths-Golden","Social Studies-Golden","Hindi-Full Marks", "English-Wren & Martin","Science-Full Marks","Maths-Golden","Social Studies-Golden","Hindi-Full Marks","English-Xam Idea","Science-Full Marks","Maths-R.D. Sharma","Social Studies-Golden","Hindi-Full Marks","English-Oxford","Science-Oswaal","Maths-R.D. Sharma","Social Studies-Golden","Hindi-Full Marks",
 "English-Full Marks","Science-Oswaal","Maths-R.D. Sharma","Social Studies-Golden","Hindi-Full Marks", "Ramayana","Mahabharata","Bhagvat Geeta","Bible","Guru Granth","Quran","Rigveda","Samaveda","Yajurveda","Atharveda", "Earth And The Solar System","Plants And Biodiversit","Geography And Topography","Natural Disasters","1001 Facts"};

char book_id[][8]={"FH711","FH712","FH713","FH714","FH715","FH716","FH717","FH718",
"FN301","FN302","FN303","FN304","FN305","FN306","FN307","FT401","FT402","FT403","FT404","FG1201", "FG1202", "FG1203","FP1301", "FP1302", "FP1303", "FP1304", "FP1305", "FP1306","201", "202", "203", "204", "205", "206","R601","R602","R603","R604","R605",
"R701","R702","R703","R704","R705","R801","R802","R803","R804","R805",
"R901","R902","R903","R904","R905","R1001","R1002","R1003","R1004","R1005",
 "H101",  "H102", "H103", "H104", "H105", "H106", "H107", "H108", "H109",                 “H110",   "E501","E502","E503","E504","E505"};

void membership_form();
void membership();
void member();
void categories1();
void categories2();
void search();
void issue();
void return_book();
void fiction2();
void bio2();
void ref2();
void holybooks2();
void encyclopedia2();

void membership()
{
  char ny;
  int code;
  cout<<"***********************************MEMBERSHIP***********************************"<<endl;
  cout<<"\nDo you have a membership? (Press Y for yes and N for no)"<<endl;
 s:
  cin>>ny;
  if(ny=='y' || ny=='Y')
  {
    cout<<"\nEnter your membership code:";
    cin>>code;
    int stp=0;
    switch(code)
    {
     case 101 : stp++;
	       break;
     case 102 : stp++;
	       break;
     case 103 : stp++;
	       break;
     case 104 : stp++;
	       break;
     case 105 : stp++;
	       break;
     case 106 : stp++;
	       break;
     case 107 : stp++;
	       break;
     case 108 : stp++;
	       break;
     case 109 : stp++;
	       break;
     case 110 : stp++;
	       break;
     default : cout<<"=> Your Membership has expired."<<endl;
	       cout<<"Please fill the membership form to continue."<<endl;
	       membership_form();
     }

     if(stp==1)
     {
      cout<<"=> Your Membership is still valid."<<endl;
      member();
     }
 }
   else if(ny=='n' || ny=='N')
   {
    cout<<"Please fill the membership form to continue."<<endl;
    membership_form();
   }
   else
    {
     cout<<"\nEnter valid option";
     goto s;
    }
}


void member()
{
  getch();
  clrscr();
  int x;
  cout<<"\n*********************************WELCOME MEMBER*********************************"<<endl;
  cout<<"\nPlease choose one option:"<<endl;
  cout<<"1.View Booklist"<<endl;
  cout<<"2.Search for a book"<<endl;
  cout<<"3.Issue book"<<endl;
  cout<<"4.Return book"<<endl;
  cout<<"5.Close application"<<endl;
  cout<<"\nEnter your choice:"<<endl;
l:
  cin>>x;
  if(x==1)
  {
   clrscr();
   categories1();
  }
  else if(x==2)
  {
   clrscr();
   search();
  }
  else if(x==3)
  {
    clrscr();
    issue();
   }
  else if(x==4)
  {
    clrscr();
    return_book();
   }
  else if(x==5)
    exit(0);
  else
  {
   cout<<"Please input correct number."<<endl;
   goto l;
  }
}

void membership_form()
{
 getch();
 clrscr();
 newmember nm;
 cout<<"\n*********************************MEMBERSHIP FORM********************************"<<endl;
 cout<<"\nNAME:";
 gets(nm.name);
 randomize();
 int code=random(9999-1000+1)+1000;
 cout<<"DATE OF BIRTH(dd/mm/yyyy):";
 cin>>nm.dob;
 cout<<"DATE OF JOINING(dd/mm/yyyy):";
 cin>>nm.date;
 cout<<"Your MEMBERSHIP CODE is :"<<code<<endl;
 cout<<"\n________________________________________________________________________________"<<endl;
 cout<<"\n         NOTE: PLEASE REMEMBER THIS CODE.IT WILL BE ASKED DURING LOGIN."<<endl;
 cout<<"\n________________________________________________________________________________"<<endl;
 cout<<"\nYour membership is valid till 1 month from "<<nm.date;
 cout<<"\nPlease pay the enrollment fee Rs.500 at the counter."<<endl;
 cout<<"\nTHANK YOU FOR ENROLLING IN OUR LIBRARY."<<endl;
 member();
}

void search()
{
  int u;
  int e=0;
  char title[80],bookid[5];
  cout<<"\n*********************************SEARCH BOOK************************************"<<endl;
  cout<<"\nSelect any one option:"<<endl;
  cout<<"1.Search by Book's name"<<endl;
  cout<<"2.Search by Book's ID"<<endl;
  cout<<"\nEnter your choice:"<<endl;
  int p;
m:
  cin>>p;
  switch(p)
  {
  case 1:  cout<<"\nEnter the book name:"<<endl;
	   gets(title);
	   for(int i=0;i<gi;i++)
	   {
	    if(strcmpi(title,book_title[i])==0)
	    {
	      e++;
	      u=i;
	    }
	   }
	   if(e==1)
	    cout<<"=> "<<book_title[u]<<" has been issued.\n   ID of '"<<book_title[u]<<"' is "<<book_id[u]<<"."<<endl;
	   else
	    cout<<title<<" is UNAVAILABLE."<<endl;
	   break;
  case 2:  cout<<"\nEnter the book ID:"<<endl;
	   gets(bookid);
	   for(i=0;i<gi;i++)
	   {
	    if(strcmpi(bookid,book_id[i])==0)
	    {
	      e++;
	      u=i;
	    }
	   }
	   if(e==1)
	    cout<<"=> "<<book_title[u]<<" has been issued.\n   ID of '"<<book_title[u]<<"' is "<<book_id[u]<<"."<<endl;
	   else
	    cout<<"Book having ID "<<bookid<<" is UNAVAILABLE."<<endl;
	   break;
  default:cout<<"\nEnter valid number."<<endl;
	  goto m;
  }
  cout<<"\nEnter 1 to go to main menu and 2 to exit."<<endl;
	   int j;
	   cin>>j;
	   if(j==1)
	    member();
	   else if(j==2)
	    exit(0);
 }

void categories2()
{
 getch();
 clrscr();
 int x;
 cout<<"The categories are:"<<endl;
 cout<<"\n1] FICTION\n2] BIOGRAPHIES\n3] REFERENCE 'n' GUIDES\n4] HOLY BOOKS\n5] ENCYCLOPEDIA"<<endl;
 cout<<"\nEnter the sr no. of the section you want to view."<<endl;
a:
 cin>>x;
 if(x==1)
  fiction2();
 else if(x==2)
  bio2();
 else if(x==3)
  ref2();
 else if(x==4)
  holybooks2();
 else if(x==5)
  encyclopedia2();
 else
 {
 cout<<"Oops!You have entered the wrong number. Please enter the number again."<<endl;
 goto a;
 }
}


void fiction2()
{
 getch();
 clrscr();
 int w;
 cout<<"\t\t\t\tFICTION CORNER"<<endl;
 cout<<"\n"<<endl;
 cout<<"The Series available are:"<<endl;
 cout<<"1.HARRY POTTER"<<endl;
 cout<<"2.THE CHRONICLES OF NARNIA "<<endl;
 cout<<"3.TWILIGHT"<<endl;
 cout<<"4.THE HUNGER GAMES"<<endl;
 cout<<"5.PERCY JACKSON"<<endl;
 cout<<"\nEnter 0 to go back to categories and enter any number to continue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories2();
 else
  cout<<"\nEnter the sr no. to view the series"<<endl;
t:
 cin>>w;
 switch(w)
 {
 case 1: cout<<"FH711 => Harry Potter And The Philosopher's Stone\nFH712 => Harry Potter And The Chamber Of Secrets"<<endl;
	 cout<<"FH713 => Harry Potter And The Prisoner Of Azkaban\nFH714 => Harry Potter And The Goblet Of Fire\nFH715 => Harry Potter And The Order Of The Phoenix"<<endl;
	 cout<<"FH716 => Harry Potter And The Half Blood Prince\nFH717 => Harry Potter And The Deathly Hallows\nFH718 => Harry Potter And The Cursed Child"<<endl;
	 cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue a book."<<endl;
	 int u;
	 cin>>u;
	 if(u==0)
	   categories2();
	 else if(u==1)
	   exit(0);
	 break;

 case 2:cout<<"THE CHRONICLES OF NARNIA "<<endl;
	cout<<"FN301 => The Lion,the Witch and the Wardrobe"<<endl;
	cout<<"FN302 => Prince Caspian"<<endl;
	cout<<"FN303 => The Voyage of the Dawn Treader"<<endl;
	cout<<"FN304 => The Silver Chair"<<endl;
	cout<<"FN305 => The Horse and His Boy"<<endl;
	cout<<"FN306 => The Magician's Nephew"<<endl;
	cout<<"FN307 => The Last Battle"<<endl;
	cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
	cin>>u;
	if(u==0)
	 categories2();
	else if(u==1)
	 exit(0);
	break;

 case 3:cout<<"\nTWILIGHT"<<endl;
	cout<<"FT401 => New Moon"<<endl;
	cout<<"FT402 => Twilight"<<endl;
	cout<<"FT403 => Eclipse"<<endl;
	cout<<"FT404 => Breaking Dawn"<<endl;
	cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
	cin>>u;
	if(u==0)
	 categories2();
	else if(u==1)
	 exit(0);
	break;

 case 4:cout<<"\nTHE HUNGER GAMES"<<endl;
	cout<<"FG1201 => The Hunger Games"<<endl;
	cout<<"FG1202 => Catching Fire"<<endl;
	cout<<"FG1203 => Mockingjay"<<endl;
	cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
	cin>>u;
	if(u==0)
	 categories2();
	else if(u==1)
	 exit(0);
	break;

 case 5:cout<<"\nPERCY JACKSON"<<endl;
	cout<<"FP1301 => The Lightning Thief"<<endl;
	cout<<"FP1302 => The Sea of Monsters"<<endl;
	cout<<"FP1303 => The Titan's Curse"<<endl;
	cout<<"FP1304 => The Battle of Labyrinth"<<endl;
	cout<<"FP1305 => Last Olympian"<<endl;
	cout<<"FP1306 => Greek Gods"<<endl;
	cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
	cin>>u;
	if(u==0)
	 categories2();
	else if(u==1)
	 exit(0);
	break;

 default:cout<<"\nOops!Select from the following list only."<<endl;
	goto t;
 }
}

void bio2()
{
 getch();
 clrscr();
 cout<<"\t\t\t\tBIOGRAPHY CORNER"<<endl;
 cout<<"\nThe books available are:"<<endl;
 cout<<"201 => Agni Ki Udan(Dr. APJ Abdul Kalam)\n202 => Messi(Lionel Messi)\n203 => The Race Of My Life(Milkha Singh)"<<endl;
 cout<<"204 => The Life Of Mahatma Gandhi\n205 => Long Walk To Freedom(Nelson Mandela)\n206 => I Am Malala(Malala Yousafzai)"<<endl;
 cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories2();
 else if(u==1)
  exit(0);
}

void ref2()
{
 getch();
 clrscr();
 int x;
 cout<<"\t\t\t\tREFERENCE CORNER"<<endl;
 cout<<"\nEnter Class "<<endl;
y:
 cin>>x;
 cout<<"\n";
 if(x==6)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR601        English        Wren & Martin"<<endl;
  cout<<"R602        Science        Full Marks"<<endl;
  cout<<"R603        Maths          Golden"<<endl;
  cout<<"R604        Social Studies Golden"<<endl;
  cout<<"R605        Hindi          Full Marks"<<endl;
 }
 else if(x==7)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR701        English        Wren & Martin"<<endl;
  cout<<"R702        Science        Full Marks"<<endl;
  cout<<"R703        Maths          Golden"<<endl;
  cout<<"R704        Social Studies Golden"<<endl;
  cout<<"R705        Hindi          Full Marks"<<endl;
 }
 else if(x==8)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR801        English        Xam Idea"<<endl;
  cout<<"R802        Science        Full Marks"<<endl;
  cout<<"R803        Maths          R.D. Sharma"<<endl;
  cout<<"R804        Social Studies Golden"<<endl;
  cout<<"R805        Hindi          Full Marks"<<endl;
 }
 else if(x==9)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR901        English        Oxford"<<endl;
  cout<<"R902        Science        Oswaal"<<endl;
  cout<<"R903        Maths          R.D. Sharma"<<endl;
  cout<<"R904        Social Studies Golden"<<endl;
  cout<<"R905        Hindi          Full Marks"<<endl;
 }
 else if(x==10)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR1001       English        Full Marks"<<endl;
  cout<<"R1002       Science        Oswaal"<<endl;
  cout<<"R1003       Maths          R.D. Sharma"<<endl;
  cout<<"R1004       Social Studies Golden"<<endl;
  cout<<"R1005       Hindi          Full Marks"<<endl;
 }
 else
 {
  cout<<"We keep books only for Std.VI to X \nPlease enter the class accordingly."<<endl;
  goto y;
 }
 cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories2();
 else if(u==1)
  exit(0);
}


void holybooks2()
{
 getch();
 clrscr();
 cout<<"\t\t\t\tHOLY BOOKS CORNER"<<endl;
 cout<<"\nThe books available are:"<<endl;
 cout<<"H101 => Ramayana"<<endl;
 cout<<"H102 => Mahabharata"<<endl;
 cout<<"H103 => Bhagvat Geeta"<<endl;
 cout<<"H104 => Bible"<<endl;
 cout<<"H105 => Guru Granth"<<endl;
 cout<<"H106 => Quran"<<endl;
 cout<<"Vedas..."<<endl;
 cout<<"H107 => Rigveda"<<endl;
 cout<<"H108 => Samaveda"<<endl;
 cout<<"H109 => Yajurveda"<<endl;
 cout<<"H110 => Atharveda"<<endl;
 cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories2();
 else if(u==1)
  exit(0);
 }



void encyclopedia2()
{
 clrscr();
 cout<<"\t\t\t\tENCYLCOPEDIA CORNER"<<endl;
 cout<<"\nThe books available are:"<<endl;
 cout<<"E501 => Earth And The Solar System\nE502 => Plants And Biodiversity\nE503 => Geography And Topography"<<endl;
 cout<<"E504 => Natural Disasters\nE505 => 1001 Facts"<<endl;
 cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories2();
 else if(u==1)
  exit(0);
}

void issue()
{
 int u,e=0;
 int cnt=0;
 char title[50];
 cout<<"***********************************ISSUE BOOK***********************************"<<endl;
 cout<<"\n";
 cout<<"Please press ENTER to view the category in order to issue the book(s)."<<endl;
 char z='Y';
 while(z=='Y'|| z=='y')
 {
  categories2();
  cout<<"\nEnter the title of the book that you wish to issue."<<endl;
 j:
  gets(title);
  for(int i=0;i<gi;i++)
  {
   if(strcmpi(title,book_title[i])==0)
   {
     e++;
     u=i;
   }
  }
  if(e==1 || e==2 || e==3)
    cout<<book_title[u]<<" has been issued.\nID of '"<<book_title[u]<<"' is "<<book_id[u]<<"."<<endl;
  else
   {
    cout<<"\nPlease enter valid title."<<endl;
    goto j;
   }
  cout<<"\nDo you want to issue another book?\nEnter Y for yes and N for no."<<endl;
  cin>>z;
  cnti++;
  if(cnti==3)
  {
   cout<<"\nYou can issue maximum 3 books at a time."<<endl;
  }
 }
 cout<<"\nPress 1 to go to main menu or 2 to close application."<<endl;
   int x;
   cin>>x;
   if(x==1)
    member();
   else if(x==2)
    exit(0);
}


void return_book()
{
 int e=0, u, f;
 char ret[50];
 cout<<"\n*********************************RETURN BOOK**********************************"<<endl;
 cout<<"\nEnter the title of the book that you wish to return:"<<endl;
q:
 gets(ret);
 for(int i=0;i<gi;i++)
  {
   if(strcmpi(ret,book_title[i])==0)
   {
     e++;
     u=i;
   }
  }
  if(e==1 || e==2 || e==3)
   cout<<"=> "<<book_title[u]<<" has been returned.\n   ID of '"<<book_title[u]<<"' is "<<book_id[u]<<"."<<endl;
 else
 {
  cout<<"\nEnter valid title."<<endl;
  goto q;
 }
 cout<<"\nEnter 1 to go to the main menu and 2 to exit"<<endl;
 cin>>f;
 if(f==1)
  member();
 else if(f==2)
  exit(0);
}


void fiction()
{
 getch();
 clrscr();
 int w;
 cout<<"\t\t\t\tFICTION CORNER"<<endl;
 cout<<"\n"<<endl;
 cout<<"The Series available are:"<<endl;
 cout<<"1.HARRY POTTER"<<endl;
 cout<<"2.THE CHRONICLES OF NARNIA "<<endl;
 cout<<"3.TWILIGHT"<<endl;
 cout<<"4.THE HUNGER GAMES"<<endl;
 cout<<"5.PERCY JACKSON"<<endl;
 cout<<"\nEnter 0 to go back to categories and enter any number to continue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories1();
 else
  cout<<"\nEnter the sr no. to view the series"<<endl;
t:
 cin>>w;
 switch(w)
 {
  case 1: cout<<"FH711 => Harry Potter And The Philosopher's Stone\nFH712 => Harry Potter And The Chamber Of Secrets"<<endl;
	  cout<<"FH713 => Harry Potter And The Prisoner Of Azkaban\nFH714 => Harry Potter And The Goblet Of Fire\nFH715 => Harry Potter And The Order Of The Phoenix"<<endl;
	cout<<"FH716 => Harry Potter And The Half Blood Prince\nFH717 => Harry Potter And The Deathly Hallows\nFH718 => Harry Potter And The Cursed Child"<<endl;
	  cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue a book."<<endl;
	  int u;
	  cin>>u;
	  if(u==0)
	   categories1();
	  else if(u==1)
	   exit(0);
	  else if(u==2)
	  {
	   clrscr();
	   issue();
	  }
	   break;

 case 2:cout<<"THE CHRONICLES OF NARNIA "<<endl;
	cout<<"FN301 => The Lion,the Witch and the Wardrobe"<<endl;
	cout<<"FN302 => Prince Caspian"<<endl;
	cout<<"FN303 => The Voyage of the Dawn Treader"<<endl;
	cout<<"FN304 => The Silver Chair"<<endl;
	cout<<"FN305 => The Horse and His Boy"<<endl;
	cout<<"FN306 => The Magician's Nephew"<<endl;
	cout<<"FN307 => The Last Battle"<<endl;
	cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
	cin>>u;
	if(u==0)
	 categories1();
	else if(u==1)
	 exit(0);
	else if(u==2)
	{
	 clrscr();
	 issue();
	}
	break;

 case 3:cout<<"\nTWILIGHT"<<endl;
	cout<<"FT401 => New Moon"<<endl;
	cout<<"FT402 => Twilight"<<endl;
	cout<<"FT403 => Eclipse"<<endl;
	cout<<"FT404 => Breaking Dawn"<<endl;
	cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
	cin>>u;
	if(u==0)
	 categories1();
	else if(u==1)
	 exit(0);
	else if(u==2)
	{
	 clrscr();
	 issue();
	}
	break;

 case 4:cout<<"\nTHE HUNGER GAMES"<<endl;
	cout<<"FG1201 => The Hunger Games"<<endl;
	cout<<"FG1202 => Catching Fire"<<endl;
	cout<<"FG1203 => Mockingjay"<<endl;
	cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
	cin>>u;
	if(u==0)
	 categories1();
	else if(u==1)
	 exit(0);
	else if(u==2)
	{
	 clrscr();
	 issue();
	}
	break;

 case 5:cout<<"\nPERCY JACKSON"<<endl;
	cout<<"FP1301 => The Lightning Thief"<<endl;
	cout<<"FP1302 => The Sea of Monsters"<<endl;
	cout<<"FP1303 => The Titan's Curse"<<endl;
	cout<<"FP1304 => The Battle of Labyrinth"<<endl;
	cout<<"FP1305 => Last Olympian"<<endl;
	cout<<"FP1306 => Greek Gods"<<endl;
	cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
	cin>>u;
	if(u==0)
	 categories1();
	else if(u==1)
	 exit(0);
	else if(u==2)
	{
	 clrscr();
	 issue();
	}
	break;

 default:cout<<"\nOops!Select from the following list only."<<endl;
	goto t;
 }
}

void bio()
{
 getch();
 clrscr();
 cout<<"\t\t\t\tBIOGRAPHY CORNER"<<endl;
 cout<<"\nThe books available are:"<<endl;
 cout<<"201 => Agni Ki Udan(Dr. APJ Abdul Kalam)\n202 => Messi(Lionel Messi)\n203 => The Race Of My Life(Milkha Singh)"<<endl;
 cout<<"204 => The Life Of Mahatma Gandhi\n205 => Long Walk To Freedom(Nelson Mandela)\n206 => I Am Malala(Malala Yousafzai)"<<endl;
 cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories1();
 else if(u==1)
  exit(0);
 else if(u==2)
 {
  clrscr();
  issue();
 }
}

void ref()
{
 getch();
 clrscr();
 int x;
 cout<<"\t\t\t\tREFERENCE CORNER"<<endl;
 cout<<"\nEnter Class "<<endl;
y:
 cin>>x;
 cout<<"\n";
 if(x==6)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR601        English        Wren & Martin"<<endl;
  cout<<"R602        Science        Full Marks"<<endl;
  cout<<"R603        Maths          Golden"<<endl;
  cout<<"R604        Social Studies Golden"<<endl;
  cout<<"R605        Hindi          Full Marks"<<endl;
 }
 else if(x==7)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR701        English        Wren & Martin"<<endl;
  cout<<"R702        Science        Full Marks"<<endl;
  cout<<"R703        Maths          Golden"<<endl;
  cout<<"R704        Social Studies Golden"<<endl;
  cout<<"R705        Hindi          Full Marks"<<endl;
 }
 else if(x==8)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR801        English        Xam Idea"<<endl;
  cout<<"R802        Science        Full Marks"<<endl;
  cout<<"R803        Maths          R.D. Sharma"<<endl;
  cout<<"R804        Social Studies Golden"<<endl;
  cout<<"R805        Hindi          Full Marks"<<endl;
 }
 else if(x==9)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR901        English        Oxford"<<endl;
  cout<<"R902        Science        Oswaal"<<endl;
  cout<<"R903        Maths          R.D. Sharma"<<endl;
  cout<<"R904        Social Studies Golden"<<endl;
  cout<<"R905        Hindi          Full Marks"<<endl;
 }
 else if(x==10)
 {
  cout<<"BOOK CODE   SUBJECT        PUBLISHER"<<endl;
  cout<<"____________________________________"<<endl;
  cout<<"\nR1001       English        Full Marks"<<endl;
  cout<<"R1002       Science        Oswaal"<<endl;
  cout<<"R1003       Maths          R.D. Sharma"<<endl;
  cout<<"R1004       Social Studies Golden"<<endl;
  cout<<"R1005       Hindi          Full Marks"<<endl;
 }
  else
  {
   cout<<"We keep books only for Std.VI to X \nPlease enter the class accordingly."<<endl;
   goto y;
  }
 cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories1();
 else if(u==1)
  exit(0);
 else if(u==2)
 {
  clrscr();
  issue();
 }
}


void holybooks()
{
 getch();
 clrscr();
 cout<<"\t\t\t\tHOLY BOOKS CORNER"<<endl;
 cout<<"\nThe books available are:"<<endl;
 cout<<"H101 => Ramayana"<<endl;
 cout<<"H102 => Mahabharata"<<endl;
 cout<<"H103 => Bhagvat Geeta"<<endl;
 cout<<"H104 => Bible"<<endl;
 cout<<"H105 => Guru Granth"<<endl;
 cout<<"H106 => Quran"<<endl;
 cout<<"Vedas..."<<endl;
 cout<<"H107 => Rigveda"<<endl;
 cout<<"H108 => Samaveda"<<endl;
 cout<<"H109 => Yajurveda"<<endl;
 cout<<"H110 => Atharveda"<<endl;
 cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories1();
 else if(u==1)
  exit(0);
 else if(u==2)
 {
  clrscr();
  issue();
 }
}



void encyclopedia()
{
 clrscr();
 cout<<"\t\t\t\tENCYLCOPEDIA CORNER"<<endl;
 cout<<"\nThe books available are:"<<endl;
 cout<<"E501 => Earth And The Solar System\nE502 => Plants And Biodiversity\nE503 => Geography And Topography"<<endl;
 cout<<"E504 => Natural Disasters\nE505 => 1001 Facts"<<endl;
 cout<<"\nEnter 0 to go back to categories or enter 1 to exit or enter 2 to issue."<<endl;
 int u;
 cin>>u;
 if(u==0)
  categories1();
 else if(u==1)
  exit(0);
 else if(u==2)
 {
  clrscr();
  issue();
 }
}

void categories1()
{
 int x;
 cout<<"The categories are:"<<endl;
 cout<<"\n1] FICTION\n2] BIOGRAPHIES\n3] REFERENCE 'n' GUIDES\n4] HOLY BOOKS\n5] ENCYCLOPEDIA"<<endl;
 cout<<"\nEnter the sr no. of the section you want to view."<<endl;
a:
 cin>>x;
 if(x==1)
  fiction();
 else if(x==2)
  bio();
 else if(x==3)
  ref();
 else if(x==4)
  holybooks();
 else if(x==5)
  encyclopedia();
 else
 {
 cout<<"Oops!You have entered the wrong number. Please enter the number again."<<endl;
 goto a;
 }
 int f;
 cout<<"Enter 1 to exit"<<endl;
 cin>>f;
 if(f==1)
 exit(0);
}

void main()
{
	clrscr();
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
	errorcode = graphresult();
	rectangle(10,150,635,300);
	settextstyle(4, HORIZ_DIR, 4);
	outtextxy(120, 200,"    Read Global Library");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(getmaxx()-450,getmaxy()-90,"Welcome. Press any key to continue ...");
	getch();
	cleardevice();
	closegraph();
	membership();
	getch();
}
