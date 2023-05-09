#include<iostream.h>
#include<conio.h>

void main()
{
  int a[2][2],b[2][2],c[2][2];
  int i,j;
  clrscr();
  cout<<"Enter the first matrix :-"<<endl;
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
     cin>>a[i][j];
   }
  }
  cout<<"Enter the second matrix :-"<<endl;
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
     cin>>b[i][j];
   }
  }
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
     c[i][j]=a[i][j]+b[i][j];
   }
  }
  cout<<"Addition of two matrix :-"<<endl;
   for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    cout<<c[i][j];
   }
   }
   getch();
}
