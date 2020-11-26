#include<iostream.h>
#include<conio.h>
/* note that this program should add no of valleys in the
system not the mountains or combined */
void main()
{
clrscr();
char ar[10];
int countU=0,countD=0,i=0,pos=0;
cout<<"Enter the trip details if the user";
int N;
cin>>N;
 for(i=0;i<N;i++)
    {
      cin>>ar[i];
    }
 a:
  // now , we have to see weather we are starting from the top or bottom
 if(ar[i]=='U'||ar[i]=='u')
  {
     for(int i=0;i<N;i++)
       {

	 if(ar[i]=='U')
	 {
	 countU++;
	 }
	 else
	 {
	 countD++;
	 }

	if(countU-countD==0)
	   {
		 cout<<i;
		 i++;
		 pos=i;
		 goto a;
	   }

       }
  }

  int step=0;

 // if starting is now from D;
   for(i=pos;i<N;i++)
       {

	 if(ar[i]=='U')
	 {
	 countU++;
	 }
	 else
	 {
	 countD++;
	 }

	if(countU-countD==0)
	   {
	     step++;
	   }

       }
  --step;
 cout<<step;
 getch();
 }
