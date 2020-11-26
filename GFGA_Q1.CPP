#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
  int N,D,arr[10],i,j;
  cout<<"Enter the length of array";
  cin>>N;
  cout<<"\nEnter the rotated area";
  cin>>D;
  for(i=0;i<N;i++)
  {
  cin>>arr[i];
  }
  //travesing the array and rev copying the elements on the new array
  int new_ar[10];
    for(i=0,j=D-1;i<D,j>=0;i++,j--)
    {
      new_ar[i]=arr[j];
    }
int i1,j1;

    for(i1=D,j1=N-1;i1<N,j1>=D;i1++,j1--)
    {
    new_ar[i1]=arr[j1];
    }

 for(i=N-1;i>=0;i--)
 {
 cout<<new_ar[i]<<"\t";
 }

 getch();
 }

