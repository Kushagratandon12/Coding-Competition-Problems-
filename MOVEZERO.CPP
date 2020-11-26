#include<iostream.h>
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
	    return ;
	    }
	  while(last->next!=NULL)
	    last=last->next;
	last->next=new_node;
	   return;
	}

   void stackprint(Node* head,int count)
   {
       for(int i=0;i<count;i++)
       {
	append(&head,0);
       }
       while(head!=NULL)
       {
	cout<<head->data<<",";
	head=head->next;
       }
   }


int main()
{
clrscr();
int ar[6]={0,1,0,3,0,12};
int count=0;
Node * head= NULL;
for(int i=0;i<6;i++)
{
	if(ar[i]==0)
		{
		count++ ;
		}
	else
		{
		append(&head,ar[i]);
		}
}
stackprint(head,count);
getch();
return 0 ;
}
