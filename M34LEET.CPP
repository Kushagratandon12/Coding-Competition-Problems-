#include<iostream.h>
#include<conio.h>

 int b_search(int arr[6] ,int l , int r , int target)
 {
 if(r>=l)
   {
    int  mid=l+(r-1)/2;

     if(arr[mid]==target)
	return mid;

     if(arr[mid]>target)
       return b_search(arr,l,mid-1,target);

	return b_search(arr,mid+1,r,target);

   }
   return -1;
 }
 void main()
 {
    clrscr();
    int arr[6] ={5,7,7,8,8,10};
    int target =  8;
    int size= ( sizeof(arr)/sizeof(arr[0]) ) ;
    int x= b_search(arr,0,size-1,target);
    cout<<x<<" THE INDEX WHERE ELEMENT IS PRESENT\n";
    cout<<(arr[x]-arr[0])<<"\n";
    cout<<(arr[5]-arr[x-1])<<"\n";

    getch();
 }