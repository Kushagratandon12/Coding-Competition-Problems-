#include<iostream.h>
#include<conio.h>
 void main()
  {
  clrscr();
    int pair=0;
    int ar[7]={1,1,1,2,2,2,3};
   for(int i=0;i<6;i++)
    {
	int  pointer1=ar[i];
	int  pointer2=ar[i+1];
	if(pointer1-pointer2==0)
	{
	pair++;
	i++;
	}

    }
 cout<<pair<<"\n";
 getch();
 }