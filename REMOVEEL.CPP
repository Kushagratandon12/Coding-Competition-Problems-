#include<iostream.h>
#include<conio.h>
#include<alloc.h>

    struct Node
      {
	int data;
	Node* next;

      };

     void insert(Node** head , int x)
     {
       Node* new_node = new Node();
       Node* last = *head ;
       new_node->data=x;
       new_node->next=NULL;
       if(*head==NULL)
       {
	 *head=new_node;
	 return ;
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


    void removeN(Node*head , int n)
    {
       int size=0,remove=0;
       Node* last = head;
	while(last!=NULL)
       {
       size++;
       last=last->next;
       }
       Node* info=head;
       remove=(size-n);
       cout<<remove<<" of index\n";
       while(remove--)
       {
       info=info->next;
       }

       Delete(head,info);

    }



 void main()
 {
 clrscr();
 Node* head=NULL;
 insert(&head,1);
 insert(&head,2);
 insert(&head,3);
 insert(&head,4);
 insert(&head,5);
 Print(head);
 removeN(head,5);
 Print(head);
 getch();
 }

