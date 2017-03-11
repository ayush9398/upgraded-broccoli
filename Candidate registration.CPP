#include<iostream.h>
#include<conio.h>
#include<string.h>

class candidate
{ long Rno;   // Registration No.
  char name[30],remark[30];
  float score;
  void AssignRem();
  public:
	void enter();
	void display();
}c;

void candidate::enter()
{  cout<<"\n\n Enter Registration no. : ";
   cin>>Rno;
   cout<<" Enter Name : ";
   cin>>name;
   cout<<" Enter Score : ";
   cin>>score;
   AssignRem();
}

void candidate::AssignRem()
{ if(score>=50)
     strcpy(remark,"Selected");
  else
     strcpy(remark,"Not Selected");
}

void candidate::display()
{ cout<<"\n\n Registration no. is : "<<Rno;
  cout<<"\n Name is : "<<name;
  cout<<"\n Score is : "<<score;
  cout<<"\n You are  "<<remark;
}

void main()
{ clrscr();
  c.enter();
  c.display();
  getch();
}
