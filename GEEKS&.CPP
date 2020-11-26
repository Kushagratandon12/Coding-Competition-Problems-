#include<iostream.h>
#include<conio.h>

  void main()
 {
    clrscr();
    int ar[7]={1,2,1,2,1,3},sum=0;
    for(int i=0;i<2;i++)
    {
       sum=sum+ar[i];
       cout<<sum;
    }

   getch();
 }