#include<iostream.h>
#include<conio.h>
#include<string.h>

	void swap(char *x,char *y)

	{
		char temp ;
		temp=*x;
		*x=*y;
		*y=temp;
	}

 void reverse (char *s)
 {
   int size=strlen(s);
   for(int i=0,j=size-1;i<j;i++,j--)
   {
     swap(&s[i] , &s[j]) ;
   }
 }
 int main()
 {
 clrscr();
 char c[10] = "Kushagra";
 reverse(c);
 cout<<c;
 getch();
 return 0;
 }