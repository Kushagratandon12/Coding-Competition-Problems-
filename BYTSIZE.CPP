#include<iostream.h>
#include<alloc.h>
#include<conio.h>
  struct node
  {
  int data ;
  node* left;
  node* right;
  };

 struct  node* new_node(int data)
   {
    struct node* node= (struct node*) malloc(sizeof(struct node));
     node->data=data;
     node->left=NULL;
     node->right=NULL;

   return (node);
   }

 struct node* insert(node* node,int data)
   {
     if(node==NULL)
	return (new_node(data));
     else
	  {
	    if(data<=node->data)
	       node->left=insert(node->left,data);
	    else
	       node->right=insert(node->right,data);

	       return node;

	  }
   }

   int size(node* node)
   {
     if(node==NULL)
       return 0;
     else
	return (size(node->left) + 1 + size(node->right));
   }

int main()
{
clrscr();
node *root = NULL;
root = insert(root,4);
insert(root,2);
insert(root,5);
insert(root,1);
insert(root,3);
insert(root,6);
cout<<size(root);
getch();
return 0;
}