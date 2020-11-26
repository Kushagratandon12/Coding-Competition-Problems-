#include<iostream.h>
#include<alloc.h>
#include<conio.h>
 struct Node
 {
   int data;
   Node* next;

 };

Node* Insert(Node* head , int x)
	{
	  Node * temp = new Node ;
	  temp->data=x;
	  temp->next=head;
	  head=temp;
	  return head;
	}
void Print(Node* head)
	{
	cout<<"List Is : - ";
	while(head!= NULL)
	{
	  cout<<head->data<<"\t";
	  head=head->next;
	}
	cout<<"\n";

	}

int main()
{
clrscr();
//empty list
Node* head=NULL;
cout<<"Enter the n numbers for a list";
int n,x;
cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"enter the number";
  cin>>x;
  head = Insert(head,x);
  Print(head);
 }
getch();
return 0;

}

