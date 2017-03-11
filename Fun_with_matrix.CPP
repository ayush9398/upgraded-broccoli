#include<iostream.h>
#include<conio.h>

int a[5][5],m,n;


void enter()        // Entry of Array
{
 cout<<"\n Enter no. of Rows and Columns :  ";
 cin>>m>>n;

 cout<<"\n Enter Elements of Array  \n";
 for(int i=0;i<m;i++)
  { for(int j=0;j<n;j++)
    {
      cout<<" Enter Element :  ";
      cin>>a[i][j];
    }
  }
}


void display()        // Display of Array
{
  cout<<"\n Array is : \n";
   for(int i=0;i<m;i++)
     { cout<<'\n';
	for(int j=0;j<n;j++)
	 {
	  cout<<'\t'<<a[i][j];
	 }
     }
}


void sum()          // Sum of Array
{ int s=0;
   for(int i=0;i<m;i++)
    { for(int j=0;j<n;j++)
      {
       s=s+a[i][j];
      }
    }
    cout<<"\n\n Sum of Array is :  "<<s;

}


void row_sum()      // Row-wise sum
{
 int rowsum[5];

 for(int i=0;i<m;i++)
  {
   rowsum[i]=0;
    {
     for(int j=0;j<n;j++)
     {
      rowsum[i]=rowsum[i]+a[i][j];
     }
    }
  }
 for(i=0;i<m;i++)
 {
  cout<<"\n\t\tSum of Row "<<i+1<<" = "<<rowsum[i];
 }
}


void col_sum()      // Column-wise Sum
{
  int colsum[5];

  for(int j=0;j<n;j++)
   {
    colsum[j]=0;
    {
     for(int i=0;i<m;i++)
     {
      colsum[j]=colsum[j]+a[i][j];
     }
    }
  }
 for(int i=0;i<n;i++)
 {
  cout<<"\n\t\tSum of Column "<<i+1<<" = "<<colsum[i];
 }
}

void trans()        // Transpose of Array
{
  cout<<"\n Transposed Array is : \n";
   for(int j=0;j<n;j++)
     { cout<<'\n';
	for(int i=0;i<m;i++)
	 {
	  cout<<'\t'<<a[i][j];
	 }
     }
}

void main()
{
 int ch;
 char ans='y';

 while(ans=='y')
  { clrscr();
    cout<<"\n 1. Enter Elements of Matrix ";
    cout<<"\n 2. Display Elements of Matrix ";
    cout<<"\n 3. Sum of all Elements ";
    cout<<"\n 4. Row-wise sum of Elements ";
    cout<<"\n 5. Column-wise sum of Elements ";
    cout<<"\n 6. Transpose of Matrix ";
    cout<<"\n 7. EXIT ";
    cout<<"\n\n Enter your Choice :  ";
    cin>>ch;

    switch(ch)
     {
      case 1:enter();
	     break;
      case 2:display();
	     break;
      case 3:sum();
	     break;
      case 4:row_sum();
	     break;
      case 5:col_sum();
	     break;
      case 6:trans();
	     break;
      case 7:return;
     }
      cout<<"\n\n Do you want MENU Again :  ";
      cin>>ans;
   }

   getch();

 }