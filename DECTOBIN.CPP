#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int ar[32]={0};
 int number,i=0 ;
 cout<<"Enter the number whose binary conversion you want to calculate\n";
 cin>>number;
 while(number>0)
 {
    ar[i]=number % 2;
    number=number / 2;
    i++;
 }
 for(int j =i-1 ; j>=0;j--)
 {cout<<ar[j];}
 getch();
 return 0;
 }
