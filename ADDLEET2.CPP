#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int sum,a,sum1=0;
cin>>sum;
a=sum;
while(sum!=0)
{
sum=sum%10;
sum1+=sum;
sum/10;
}
cout<<sum1;
getch();
}