#include<iostream.h>
#include<conio.h>
#include<math.h>

 void happy(int n)
 {  int a =0,sum=0;
    while(n!=0)
   {
     a=n%10;
     sum=sum+pow(a,2);
     n=n/10;

   }
   if(sum!=1)
		{
		  happy(sum);
		}
       else
		{
		cout<<"Happy Number";
		}
 }


void main()
{
 int a=19;
 happy(a);
 getch();
}