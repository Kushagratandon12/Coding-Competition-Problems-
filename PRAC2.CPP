#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int n= 19,a=0,sum=0;
 while(n!=0)
 {
 a=n%10;
 sum = sum  + pow(a,2);
 n=n/10;
 }
 cout<<sum;
 getch();
 }