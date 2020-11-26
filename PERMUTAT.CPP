#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
	char a[20] = {"geeksforgeeks"};
	char b[20]={"geeksforgeeks"};
	 int sum1=0,sum2=0;
for(int i=0;i<5;i++)
{
  sum1=sum1+int(a[i]);
  sum2=sum2+int(b[i]);


}
if(sum1==sum2)
cout<<"\nPermutation";
else
cout<<"\n Not A Permutation";


getch();
}
