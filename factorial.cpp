#include <iostream.h>
#include<conio.h>
int fact(int num)
{
    if(num==1)
    {
        return num;
    }
  
  return num * fact(num-1);
}
void main()
{
    int n,result;
    clrscr();
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    result=fact(n);
    cout<<"Factorial is:"<<result;
    getch();
}
