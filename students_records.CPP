#include<fstream.h>
#include<conio.h>
#include<stdio.h>


class student
{char s_admno[10];
 char s_name[30];
 int per;
   public:
	  void in()
	   { cout<<" Enter admno.:  ";
	     gets(s_admno);
	     cout<<" Enter name : ";
	     gets(s_name);
	     cout<<" Enter percentage : ";
	     cin>>per;
	   }

	   void out()
	    { cout<<"\n Admno.is : "<<s_admno;
	      cout<<"\n Name is : "<<s_name;
	      cout<<"\n Percentage is : "<<per;
	    }

	   int ret_per()
	    { return per;
	    }

	   }s;


  void enter()
    {
      ofstream fout("student.dat",ios::app);
      s.in();
      fout.write((char*)&s,sizeof(s));
      fout.close();
    }


  void copy()
     {
       ifstream fin("student.dat");
       ofstream fout("pass.dat");

       while(fin.read((char*)&s,sizeof(s)))
	   { if(s.ret_per()>=40)
	     {
	       fout.write((char*)&s,sizeof(s));
	     }
	  }

       fin.close();
       fout.close();

    }

  void display()
    {
      ifstream fin("pass.dat");
       while(fin.read((char*)&s,sizeof(s)))
	{
	  s.out();
	}

       fin.close();
    }

  void main()
  {
    char ans='y';
    int n;
     while(ans=='y')
      {
       clrscr();
       cout<<"\n 1. Enter Details ";
       cout<<"\n 2. Copy pass student records ";
       cout<<"\n 3. Display Pass students records ";
       cout<<"\n 4. EXIT ";
       cout<<"\n Enter Your Choice :  ";
       cin>>n;

       switch(n)
	{ case 1:enter();
		 break;
	  case 2:copy();
		 break;
	  case 3:display();
		 break;
	  case 4:return;
	}
	 cout<<"\n Do you want menu again ";
	 cin>>ans;
     }
     getch();

   }