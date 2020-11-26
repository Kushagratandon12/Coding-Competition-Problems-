#include<iostream.h>
#include<conio.h>

	void swap(int *x,int *y)

	{
		int temp ;
		temp=*x;
		*x=*y;
		*y=temp;
	}


  class Heap
{
     int cap,arr_size,*harr;
     public:
       Heap(int size)
       {
       cap=size;
       arr_size=0;
       harr= new int[cap];
       }
  int parent(int i)
	 {
	 return ((i-1)/2);
	 }
  int left(int i)
	{
	 return ((2*i)+1);
	}
  int right (int i)
	{
	return ((2*i)+2);
	}
  void insert(int key)
  {
    if(cap==arr_size)
    {
    cout<<"overflow";
    }
     arr_size++;
    int i=arr_size-1;
     harr[i]=key;
     while(i!=0 && harr[i]>harr[parent(i)])
     {
       swap(&harr[i],&harr[parent(i)]) ;
       i=parent(i);
     }
  }

   void print()
 {
   for(int i=0;i<cap;i++)
   {
    cout<<harr[i];
    cout<<"\t";
   }
 }
};

void main()
{
clrscr();
Heap h(5);
int x ;
cout<<"\tEnter The Elements In Arr[] \n ";
for(int i=0;i<5;i++)
{
cin>>x;
h.insert(x);
}
h.print();
getch();
}