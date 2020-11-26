#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char ar[18]={"Mr   3ohn    Smith"};
  int count=0;
  for(int i=0;i<15;i++)
	{
	   if(ar[i]==' ')
	     {
	     ar[i]='%2';
	     count++;
	     }
	}
  for(int i=0;i<15;i++)
  {
  cout<<ar[i];
  }

cout<<count;
getch();
}
