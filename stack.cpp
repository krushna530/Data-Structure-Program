#include<iostream.h>
#include<conio.h>

int n=5, stack[5];
int top=-1;

void push()
{
  int val;
  if(top==n-1)
  {
   cout<<"overflow";
  }
  else
  {
    cout<<"enter element";
    cin>>val;
    top++;
    stack[top]=val;
  }
}
void pop()
{
  int item;
  if(top==-1)
  {
   cout<<"underflow";
  }
  else
  {
    item=stack[top];
    top--;
    cout<<"pop element"<<item<<endl;
  }
}
void display()
{
  int i;
  for(i=top;i>=0;i--)
  {
   cout<<stack[i]<<" ";
  }
}

void main()
{
  int ch;
  clrscr();

  cout<<"1_push"<<endl;
  cout<<"2_pop"<<endl;
  cout<<"3_display"<<endl;
  cout<<"4_exit"<<endl;

  do
  {
    cout<<"choice"<<endl;
    cin>>ch;
    switch(ch)
    {
     case 1:
	  push();
	  break;
     case 2:
	  pop();
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
