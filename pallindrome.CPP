#include<iostream.h>
#include<conio.h>
#include<string.h>


void word(char a[],char b[],char*p,char*q,int l)
{  char t;
  for(int i=0;i<l/2;i++)
  {
    t=*p;
	  *p=*q;
	  *q=t;
	  p++;
	  q--;
  }

  cout<<"\n Reverse of String is : "<<a;

  if(strcmp(b,a)==0)
	  cout<<"\n String is a Palindrome  ";
  else
	  cout<<"\n String is not a Palindrome ";
}

void main()
{  
  clrscr();
  char*p,*q;
  char a[20],b[20];
  cout<<"\n Enter a String  :  ";
  cin>>a;
  int l=0;
  l=strlen(a);
  p=&a[0];
  strcpy(b,a);
  q=&a[l-1];
  word(a,b,p,q,l);
  getch();
}
