#include<iostream.h>
#include<conio.h>
#include<stdio.h>
 void merge(int arr[] , int l , int m , int r)
    {
       int i,j,k;
       int n1 = m-l + 1;
     //  cout<<"\n n1 value\n "<<n1;
       int n2 = r-m;
    //   cout<<"\n n2 value \n"<<n2;

     int L[5] , R[5];

       for(i=0;i<n1;i++)
       {	 L[i]=arr[l+i];   }
       for( j=0;j<n2;j++)
       {	 R[i]=arr[m+1+j]; }

       i=0,j=0,k=l;
       while(i<n1 && j<n2)
   {
	  if(L[i] <= R[j])

	  {
	      arr[k]=L[i];
	      i++ ;
	  }

	  else
	  {
	  arr[k]=R[j];
	  j++ ;
	  }

       k++;
    }

  while(i<n1)
  {
    arr[k]=L[i];
    i++;
    k++;
  }
   while(j<n2)
     {
	 arr[k]=R[j];
	 j++;
	 k++;
     }
}


 void mergesort(int arr[] , int l , int r)
 {
    if(l<r)
    {
    int m = (l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);

    merge(arr,l,m,r);
    }
 }

 int main()
 {
 clrscr();
 int arr[]={12,11,13,5,6,7};
 int n = sizeof(arr)/sizeof(arr[0]);
 mergesort(arr,0,5);
 //printing the array
 for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"\n";
  }
 getch();
 return 0;
 }