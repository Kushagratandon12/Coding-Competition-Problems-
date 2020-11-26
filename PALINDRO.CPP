#include<iostream.h>
#include<conio.h>
#include<alloc.h>

 class Node
	{
	 public:
	  int data;
	  Node* next;

	} ;

 Node* new_node(int x)
 {
 Node* new_node = new Node();
 new_node->data = x;
 new_node->next = NULL;
 return new_node;
 }

 void push(Node ** root , int data)
 {
   Node* node = new_node(data);
   node->next=*root;
   *root=node;

 }
 int pop(Node** root)
 {
   Node* temp  = *root;
   *root = (*root)->next;
   int popped = temp->data;
   free(temp);

   return popped;
 }

 int peek(Node* head)
 {
    return head->data;
 }

 int isPali(Node* head)
 {
   Node* slow = head;
   while(slow!=NULL)
   {
     push(&head,slow->data);
     slow=slow->next;
   }
      while(head!=NULL)
      {
	int i = peek(head);
	pop(&head);
	if(head->data!=i)
	{
	  return 0 ;
	}

      head=head->next;
   }
   return 1;
 }




 int main()
 {
   clrscr();
   cout<<"Palindrom Check\n";
   Node* root = NULL;
   push(&root,1);
   push(&root,2);
   push(&root,2);
   push(&root,1);
   int result= isPali(root);
   if(result==1)
       cout<<"Not A Palindrom\n";
   else
	cout<<"Palindrome\n";

   getch();
   return 0;
 }
