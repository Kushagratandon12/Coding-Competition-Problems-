#include<iostream.h>
#include<conio.h>
/* creation of a cirular linked list
a) Linked List and the place where we want to get a circular list
b) Know how to end the linked list so that we dont go for infinite loop

*/
   struct Node
   {
   int data;
   Node* next;
   };

  void append(Node** head , int x)
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
 void Print(Node* head,int size)
	{
	Node *temp=head;
	cout<<"\nList Is : - ";
	while(size--)
	{
	  cout<<temp->data<<"\t";
	  temp=temp->next;

	}
	}
 void circular(Node*head , Node*cir)
 {
  Node*last=head;
  Node * temp = cir ;
  while(last!=NULL)
  {
  last=last->next;
  }
  last->next=cir;
 }

 int main()
 {
 clrscr();
 Node* Head=NULL;
 int size,x;
 cout<<"Enter The No Of Elements";
 cin>>size;
 for(int i=0;i<size;i++)
 {
 cin>>x;
 append(&Head,x);
 }
 Print(Head,size);
 circular(Head,Head->next);
 Print(Head,size+1);
 /*Now generating the circular linked list */
 getch();
 return 0;
 }