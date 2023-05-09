#include<iostream.h>
#include<conio.h>
void main()
{
  int a[20],n,i,search;
  clrscr();

  cout<<"Enter the size of array :-"<<endl;
  cin>>n;

  cout<<"Enter the element of array :-"<<endl;
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  }
  cout<<"enter the element to search"<<endl;
  cin>>search;
 for(i=0;i<n;i++)
  {
   if(a[i]==search)
   {
   cout<<"element found at"<<i<<endl;
   break;
   }
   }
   if(a[i]!=search)
   {
    cout<<"element not found"<<endl;
   }
  getch();
}
