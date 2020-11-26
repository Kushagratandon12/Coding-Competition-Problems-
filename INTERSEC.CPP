#include<iostream.h>
#include<conio.h>
  struct Node
  {
    int data;
    Node* next;
  } ;

   void insert(Node** head, int x)
   {
      Node* new_node = new Node();
      new_node->data=x;
      new_node->next=NULL;
      Node* last=*head;
     if(*head==NULL)
     {
	*head=new_node;
	return;
     }
     while(last->next!=NULL)
     {
       last=last->next;
     }
     last->next=new_node;
     return ;
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
   void intersect(Node* L1, Node* L2,Node* L3)

   {  //connect l1 with l3
      while(L1->next!=NULL)
      {
	L1=L1->next;
      }
      L1->next=L3;
     //connect l2 with l3
      while(L2->next!=NULL)
      {
       L2=L2->next;
      }
      L2->next=L3;

  }

  Node* search(Node*L1,Node*L2)
  {
     Node* pa=L1 , *pb=L2;
     while(pa!=pb)
     {
       pa=(pa!=NULL)?pa->next:L2;
       pb=(pb!=NULL)?pb->next:L1;
     }
     return pa;
  }



   int main()
  {
     clrscr();
     Node* L1=NULL;
     insert(&L1,1);
     insert(&L1,2);
     Print(L1);
     cout<<"\n";
     Node* L2 = NULL;
     insert(&L2,2);
     insert(&L2,6);
     insert(&L2,7);
     Print(L2);
     cout<<"\n";
     Node* L3 = NULL;
     insert(&L3,8);
     insert(&L3,4);
     insert(&L3,3);
     intersect(L1,L2,L3);
     Print(L1);
     cout<<"\n";
     Print(L2);

     Node* L4=search(L1,L2);
     Print(L4);
     getch();
     return 0;
  }
