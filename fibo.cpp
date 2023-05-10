#include<iostream.h>
#include<conio.h>
int fibbo(int n)
{
     if(n==0)
     {
         return 0;
     }
     else if(n==1)
     {
         return 1;
     }
     else
     {
       return fibbo(n-1)+fibbo(n-2);
     }
}
int main()
{
     int num,i;
     clrscr();
     
     cout<<"Enter Number:"<<endl;
     cin>>num;
     
     for(i=0; i<num; i++)
     {
         cout<<fibbo(i)<<" ";
     }
     getch();
}
