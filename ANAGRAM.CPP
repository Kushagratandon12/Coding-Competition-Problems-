#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
	char a[8] = {"anagram"};
	char b[8]={"nagaram"};
	 int sum1=0,sum2=0;
for(int i=0;i<5;i++)
{
  sum1=sum1+int(a[i]);
  sum2=sum2+int(b[i]);


}
if(sum1==sum2)
cout<<"\nAnagram";
else
cout<<"\n Not Anagram";


getch();
}
