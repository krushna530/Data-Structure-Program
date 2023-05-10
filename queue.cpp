#include<iostream.h>
#include<conio.h>

int queue[5],n=20,rear=-1,front=-1;

int isfull()
{
 if(rear==n-1)
 {
  return 1;
 }
 return 0;
}
int isempty()
{
 if(front==-1 && rear==-1)
 {
   return 1;
 }
 return 0;
}
void insert()
{
 int val;
 if(isfull())
 {
  cout<<"overflow";
 }
 else
 {
  front=0;
 }
 cout<<"insert element";
 cin>>val;
 rear++;
 queue[rear]=val;
}
void del()
{
 if(isempty())
 {
  cout<<"underflow";
 }
 else
 {
 cout<<"delete element"<<queue[front];
 front++;
 }
}
void display()
{
  if(front==-1)
  {
   cout<<"Queue is empty :-";
  }
  else
  {
   cout<<"Queue elements";
   for(int i=front;i<=rear;i++)
   {
   cout<<queue[i];
   }
  }
}
void main()
{
  int ch;
  clrscr();

  cout<<"insert";
  cout<<"delete";
  cout<<"display";
  cout<<"exit";

  do
  {
   cout<<"enter choice";
   cin>>ch;
   switch(ch)
   {
     case 1:
	  insert();
	  break;
     case 2:
	 del();
	 break;
     case 3:
	 display();
	 break;
     case 4:
	 cout<<"exit";
	break;
     default:
	cout<<"invalid";
	break;
   }
  }while(ch!=4);
  getch();
}
