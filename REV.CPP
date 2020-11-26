#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n = 123,rev,remainder;
while(n!=0)
{
remainder=n%10;
rev=rev*10+remainder;
n=n/10;

}
getch();
}