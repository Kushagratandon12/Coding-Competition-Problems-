#include<iostream.h>
#include<conio.h>

 int findpeaku(int arr[] , int low , int high , int n)
   {
     int  mid = (low +high)/2;
	if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1|| arr[mid+1]<=arr[mid]))
	return mid;

	else if(mid>0 && arr[mid-1]>arr[mid])
	 return findpeaku(arr , low , (mid-1),n);

	else
	return findpeaku(arr,(mid+1),high,n) ;
   }

 int findpeak(int arr[] , int n)
 {
 return findpeaku(arr,0,(n-1),n);
 }
 int main()
 {
 clrscr();
 int arr[] = {1,3,20,12,1,15};
 int n=5;
 int e=findpeak(arr,n);
 cout<<arr[e];
 getch();
 return 0;
 }

