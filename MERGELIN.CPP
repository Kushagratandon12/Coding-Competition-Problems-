#include<iostream.h>
#include<conio.h>

  struct Node
  {
     int data;
     Node * next;
  };

  // linked list implementation
void insert(Node** head , int x)
	{
	  Node * new_node = new Node();
	  Node *last = *head;
	  new_node->data = x;
	  new_node->next=NULL;
	  if(*head==NULL)
	    {
	    *head=new_node;
	    return;
	    }
	  while(last->next!=NULL)
	    last=last->next;
	last->next=new_node;
	   return;
	}
  void Print(Node* head)
	{
	Node *temp=head;
	cout<<"\nList Is : - ";
	while(temp!= NULL)
	{
	  cout<<temp->data<<"\t";
	  temp=temp->next;

	}
	}
  Node* merge(Node *L1 , Node *L2)
  {
   Node* L3 = new Node();
   while(L1->next!=NULL)
	{

	   if(L1->data  <  L2->data)
	     { insert(&L3,L1->data);
	       L1=L1->next;
	     }
	   else if(L1->data > L2->data)
	      {
	       insert(&L3,L2->data);
	       L2=L2->next;
	      }
	   else
	      {
	      insert(&L3 ,L1->data);
	      insert(&L3,L2->data);
	       L1=L1->next;
	       L2=L2->next;
	      }
	}

	while(L1!=NULL)
	{ insert(&L3,L1->data);
	  L1=L1->next;
	}
	while(L2!=NULL)
	{
	insert(&L3,L2->data);
	L2=L2->next;
	}

  return(L3) ;
  }
  int main()
  {
     clrscr();
     Node* L1=NULL;
     insert(&L1,1);
     insert(&L1,2);
     insert(&L1,4);
     Print(L1);
     cout<<"\n";
     Node* L2 = NULL;
     insert(&L2,1);
     insert(&L2,3);
     insert(&L2,4);
     Print(L2);
     cout<<"\n";
     Node * L3 = merge(L1,L2);
     Print(L3);
     getch();
     return 0;
  }