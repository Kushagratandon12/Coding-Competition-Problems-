#include<iostream.h>
#include<conio.h>
#include<alloc.h>

	void swap(int *x,int *y)

	{
		int temp ;
		temp=*x;
		*x=*y;
		*y=temp;
	}

 class Heap
 {
  int *harr;
  /* declaration of array since it is a heap and heap concept based on array
  in which parents are declared at ((i-1)/2) left children will be at (2*i+1)
  and right children is at ((2*i)+2) */
  int heap_size,cap;

 public:

	     Heap(int size)
	     {
	     cap=size;
	     harr=new int[cap];
	     }

	  int parent(int i )
		 {
		 return ((i-1)/2);
		 }
	  int leftchild(int i)
		 {
		 return ((2*i)+1);
		 }
	  int rightchild(int i)
		{
		return ((2*i)+2);
		}

 void insert_key(int k);
 //function created to insert the elements in an array / Heap in this case
 void print()
 {
   for(int i=0;i<cap;i++)
   {
    cout<<harr[i];
    cout<<"\t";
   }

 }
 };

  void Heap::insert_key(int k )
  {
	if(heap_size==cap)
	   {
	     cout<<"Overflow";
	   }
	heap_size++;
	int i=heap_size-1;
	harr[i]=k;
	    while(i!= 0 && harr[parent(i)] > harr[i])
		     {
			swap(&harr[parent(i)],&harr[i]);
			i=parent(i);
		     }
  }

 int main()
{
 clrscr();
 Heap h(8);
 h.insert_key(2);
 h.insert_key(1);
 h.insert_key(8);
 h.insert_key(10);
 h.insert_key(25);
 h.insert_key(29);
 h.insert_key(30);
 h.print();
 getch();
 return 0;
}


