/*

Structure/Class named Node having 2 variables first is data and next is Node*
which will be storing the data and the pointer to the next
// Insert - void return type having arguments as head as double pointer and data
step 1 - make a new node using new operator new and  new_node->data = x the variable holding the data
step 2 - new_node->next=NULL;
step 3 - if node is null then *head = new_node
step 4 - while(last->next=NULL) where *last=*head {last=last->next}
step 5 - last->next=new_node

Done

// Searching the element we have ,
step: 1) starting the entrance through traverse
step: 2) head->data == found the element then found the element
else not found
head=head->next


*/
#include<iostream.h>
#include<alloc.h>
#include<process.h>
#include<conio.h>

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


void Print(Node* head)
	{
	int count=0;
	Node *temp=head;
	cout<<"\nList Is : - ";
	while(temp!= NULL)
	{
	  cout<<temp->data<<"\t";
	  temp=temp->next;
	  count++;
	}
	cout<<"\n";
	cout<<"Length Of The List "<<count<<" & for middle element "<<count/2<<" \n";
	}


void Find(Node* head,int find)
 {
    while(head!=NULL)
    {
	if(head->data==find)
	{
	cout<<"Element Found";
	}
	head=head->next;
    }
 }

void Delete(Node * head , Node *n)
  {
	if(head==n)
       {
	     if(head->next==NULL)
	     {
	     cout<<"There is only one node cant be made empty";
	     return ;
	     }
	  head->data=head->next->data;
	  n=head->next;
	  head->next=head->next->next;
	  free(n);
	  return ;
       }

       Node *prev=head;
       while(prev->next!= NULL && prev->next!= n)
	 prev = prev->next;
       if(prev->next == NULL)
	  {
	    cout<<"\n GIven Node is Not Present";
	    return;
	  }
       prev->next=prev->next->next;
       free(n);
       return;
   }
 Node* reverse(Node* head)
{
  Node* current = head;
  Node* prev=NULL , *next=NULL;
  while(current!=NULL)
  {
  next=current->next;
  current->next=prev;
  prev=current;
  current=next;
  }
 return prev;
}

int main()
{
clrscr();
//empty list
Node* head=NULL;
append(&head,14);
append(&head,25);
append(&head,37);
append(&head,83);
append(&head,12);
append(&head,20);
/*
length with the help of the while statement through travesing ,
traversing is done in a fashion like
while(head!= NULL)
{
cout<<head->data;
head=head->next;
}
putting a counter varible with it gives the total length of the linked list
*/
Print(head);
Find(head,25);
Delete(head,head->next->next);
Print(head);
cout<<"Printing the reverse press enter";
getch();
Node *prev;
prev=reverse(head);
Print(prev);
getch();
return 0;
}

