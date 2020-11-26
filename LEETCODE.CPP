#include<iostream.h>
#include<conio.h>

 void main()
 {
 int ar[10],length=0;
 int n;
 cin>>n;
	for(int i=0;i<n;i++)
	 {
	 cin>>ar[i];
	 length++;
	 }
 if(length%2==0)
 {
 cout<<"False";
 }
 else
 {
 cout<<"True";
 }
 getch();
 }