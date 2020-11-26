#include<iostream.h>
#include<conio.h>
 int min(int a , int b)
  {
     if(a>b)
       return b;
     else
       return a;

  }


void main()
{
  clrscr();
  int max[9]={0};
  int product;
  int ar[9]={1,8,6,2,5,4,8,3,7};
  for(int i=0;i<9;i++)
  {
   for(int j=8;j>=0;--j)
    {
       product=(min(ar[i],ar[j])*(j-i));
    }
   max[i]=product;
  }
  for(i=0;i<9;i++)
  {
   cout<<max[i];
  }
getch();
}