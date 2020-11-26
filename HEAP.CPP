#include<iostream.h>
#include<conio.h>
#include<alloc.h>

	void swap(*x,*y)

	{
		int temp ;
		temp=*x;
		*x=*y;
		*y=temp;
	}

 class Heap
 {
      int *arr;
     int heap_capacity;
     int heap_size;

 public:

  Heap(int s)
  {
    heap_capacity=s;
    heap_size=0;
    harr = new int[cap]
  }
  //parent node
  int parent_node(int i )
    {
      return ((i-1)/2);
    }
   //left children of parent (heap)

  int left_child(int i)
    {
       return(2*i+1);
    }

   //right children of the parent (heap)
   int right_child(int i)
    {
       return(2*i+2);
    }

   void insertKey(int k );
  };

   void Heap::insertKey(int k)
{
       if(heap_size==capacity)
       {
	cout<<"Overflow";
       }
   heap_size++;
   int i=heap_size-1;
   harr[i]=k;

   // fix the heap property;
   while(i!=0&&harr[parent(i)]>harr[i])
   {
   swap(&harr[i],&harr[parent(i)]);
   i=parent(i);
   }
 }

 int main()
{
 clrscr();
 Heap(5);
 h.insertKey(1);
 h.insertKey(4);
 h.insertKey(8);
 h.insertKey(10);
 getch();
 return 0;

}
