#include<iostream.h>
#include<conio.h>
#define MAX 5

  class Hash
  {
    int hash_size;
    int *hash_arr;
  public:

    Hash(int size)
    {
      hash_size=size;
      hash_arr = new int[size];

    }

    int hash_key(int key)
    {
       return (key%10);

    }

    void insert(int hash_code , int element)
    {
       hash_arr[hash_code]=element;

    }

    void Print()
    {
      for(int i=0;i<5;i++)
	{
	  cout<<hash_arr[i] ;

	}

    }


  };


  int main()
  {
   clrscr();
   // data stored in the array for hashing
   int ar[5] = {25,27,46,70,89};
   //caling hashing function to generate the hash code
   Hash hash(5);

   for(int i=0;i<5;++i)
      {
       int j = hash.hash_key(ar[i]);
       cout<<"\nHash Value Generated "<<j<<" Element "<<ar[i]<<" ";
       hash.insert(j,ar[i]);
      }

  hash.Print();
  getch();
  return 0;

  }


