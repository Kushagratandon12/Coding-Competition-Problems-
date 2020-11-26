#include<iostream.h>
#include<conio.h>
void main()
{
int i,j;
int arr={4,2,4,5,2,3,1};
int size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++)
	  for(j=i+1;j<size;j++)
	    if(arr[i]==arr[j])
		cout<<arr[i]<<" ";
getch();
}