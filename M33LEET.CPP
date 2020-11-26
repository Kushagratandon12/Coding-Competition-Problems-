//binary search in shifted manner
#include<iostream.h>
#include<conio.h>

      int binary_search(int arr[5] , int l , int r, int x)

     {
	if(r>=l)
	{
	  int mid = l + (r-1) / 2;
	   if(arr[mid]== x)
	      return mid;

	   if(arr[mid]>x)
	      return  binary_search(arr,l,mid-1,x);

	    return binary_search(arr,mid+1,r,x);
	}

       return -1;

      }

    int main()
 {
   clrscr();
   int arr[5] = {4,10,40,2,3};
   int x=4;
   int n=sizeof(arr)/sizeof(arr[0]);
   int result = binary_search(arr,0,n-1,x);
   (result==1)? cout<<"-1":cout<<result;
   getch();
   return 0;
 }
