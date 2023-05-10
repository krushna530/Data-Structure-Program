#include<iostream.h>
#include<conio.h>

void tower(int,char,char,char);
void main()
{
  int n;
  clrscr();
  cout<<"enter the size of disk :-";
  cin>>n;
  tower(n,'a','b','c');
  getch();
}

void tower(int n,char beg,char aux,char end)
{
 if(n>=1)
 {
  tower(n-1,beg,end,aux);
  cout<<"move disk :-"<<n <<" "<<"from"<<" "<<beg<<" "<<"to"<<" "<<end<<endl;
  tower(n-1,aux,beg,end);
 }
}
