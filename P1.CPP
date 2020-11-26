#include<iostream.h>
#include<conio.h>


   void swap (int *x , int *y)
   {
   int temp;
   temp=*x;
   *y=*x;
   *y=temp;
   }

  class Heap
  {
	int *harr , cap , heap_size ;
   public:

	Heap(int size)
	{
	  cap=size;
	  harr=new int[cap];
	}

    int parent (int i)
    {
    return ((i-1)/2);
    }
    int left_parent(int i)
    {
    return ((2*i)+1);
    }
    int right_parent(int i)
    {
    return ((2*i)+2);
    }

   void Insert_key(int key)
  {
     if(heap_size==cap)
     {
     cout<<"Overflown";
     }
     heap_size++;
      int i=heap_size - 1;
      harr[i]=key;
      while(i!=0 && harr[parent(i)]>harr[i])
       {
	swap(&harr[parent(i)],&harr[i]);
	i=parent(i);
       }
  }

    void print()
    {
      for(int i=0;i<cap;i++)
      {
      cout<<harr[i];
      }
    }
 };

 void main()
{
 clrscr();
 Heap h(4);
h.Insert_key(5);
h.Insert_key(10);
h.Insert_key(30);
 h.print();
 getch();
}