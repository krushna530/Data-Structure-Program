#include<iostream.h>
#include<conio.h>

void main()
{
  int a[10],n,i,j,temp;
  clrscr();

  cout<<"Enter the number :-";
  cin>>n;

  cout<<"Enter the element";
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  }
   for(i=0;i<n-1;i++)
   {
    for(j=0;j<n-1-i;j++)
    {
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
    }
   }
   cout<<"sorted array :-";
   for(i=0;i<n;i++)
   {
   cout<<a[i]<<endl;
   }
  getch();
}
