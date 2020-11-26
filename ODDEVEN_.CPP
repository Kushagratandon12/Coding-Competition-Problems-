#include<iostream.h>
#include<conio.h>

 struct Node
 {
 int data;
 Node* next;
 };

 void insert(Node** head , int x)
   {
     Node* new_node= new Node();
     new_node->data=x;
     new_node->next=NULL;
     if(*head==NULL)
     {
      *head=new_node;
      return;
     }
     Node* last = *head;

     while(last->next!=NULL)
     {
     last=last->next;
     }
     last->next = new_node;

     return;
   }


   void Print(Node* head)
   {
   Node* current = head;
   while(current!=NULL)
   {
    cout<<current->data;
    current=current->next;
   }
   }

   Node* odd_even(Node* head)
   {
      if(head==NULL || head->next==NULL)
      {
      return head;
      }
      else
      {
      Node* odd=head;
      Node* even=head->next;
      Node* evenHead=even;
      while(even!=NULL && even->next!=NULL)
      {
      odd->next=even->next;
      odd=even->next;
      even->next=odd->next;
      even=odd->next;

      }
      odd->next=evenHead;

      return(head);
   }
 }

  void main()
  {
  clrscr();

  Node* head=NULL;
  Node* answer;
  insert(&head,1);
  insert(&head,2);
  insert(&head,3);
  insert(&head,4);
  insert(&head,5);
  Print(head);
  cout<<"\n\nOdd and Even Found Out";
  answer=odd_even(head);
  Print(answer);
  getch();
  }