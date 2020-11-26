#include<iostream.h>
#include<conio.h>
#include<alloc.h>
void main()
{
clrscr();
int counter;
cin>>counter;
while(counter--)
{
int *harr,size=0,sumex=0,sum=0;
cout<<"Enter the size of the array";
cin>>size;
harr=new int[size];
for(int i=0;i<size-1;i++)
{
cin>>harr[i];
sum=sum+harr[i];
}

sumex=(size)*(harr[0]+size)/2;
//for(i=0;i<size-1;i++)
//{
//cout<<harr[i];
//}
if(sumex==1)
{
cout<<2;
break;
}
cout<<sumex-sum<<"\nMissing Element\n";
}
getch();
}