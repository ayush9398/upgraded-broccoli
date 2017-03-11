  #include<iostream.h>
  #include<conio.h>

  void merge(int a[],int b[],int c[],int m,int n)
   {
     int p=0,q=n-1,z=0;

      for( ;p<m&&q>=0; )
	{
	  if(a[p]<b[q])
	    {
	      c[z++]=a[p++];
	    }
	  else
	    {
	     c[z++]=b[q--];
	    }
	}

      if(p<m)
	{
	  while(p<m)
	    {
	      c[z++]=a[p++];
	    }
	}

      if(q>=0)
	{
	  while(q>=0)
	    {
	      c[z++]=b[q];
	       q--;
	    }
	}

    cout<<"\n\n Array 1 in Ascending order is :  ";
     for(int i=0;i<m;i++)
       {
	 cout<<a[i]<<"  ";
       }

    cout<<"\n\n Array 2 in Descending order is :  ";
     for(i=0;i<n;i++)
       {
	 cout<<b[i]<<"  ";
       }

    cout<<"\n\n Resultant Array in Ascending order is :  \n\t\t";
     for(i=0;i<z;i++)
       {
	 cout<<c[i]<<"  ";
       }

  }


  void main()
   {
     clrscr();
     int a[10],b[10],c[20],m,n;

     cout<<" Enter size of Array 1 :  ";
     cin>>m;

     cout<<" Enter size of Array 2 :  ";
     cin>>n;

     cout<<"\n Enter elements of Array 1 ( Should be in ascending order)  \n";
      for(int i=0;i<m;i++)
	 {
	   cout<<" Enter Element : ";
	   cin>>a[i];
	 }

     cout<<"\n Enter elements of Array 2 ( Should be in descending order)  \n";
      for(int j=0;j<n;j++)
	 {
	   cout<<" Enter Element : ";
	   cin>>b[j];
	 }

     merge(a,b,c,m,n);

     getch();

     }