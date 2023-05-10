//insert element at last position
#include<iostream.h>
#include<conio.h>
void main()
{
int arr[10],i,ele,n;
clrscr();
cout<<"Enter Size:"<<endl;
cin>>n;
cout<<"Enter array element:-"<<endl;
for(i=0;i<n;i++)
{
   cin>>arr[i];
}
cout<<"Enter number to insert:-";
cin>>ele;
arr[n]=ele;
for(i=0;i<n+1;i++)
{
cout<<arr[i]<<endl;
}
getch();
}
