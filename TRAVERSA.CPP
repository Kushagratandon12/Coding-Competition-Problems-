#include<iostream.h>
#include<conio.h>
#include<alloc.h>

   struct node
   {
       int data;
       struct node* left;
       struct node* right;
   };

   struct node* newNode(int data)
    {
       struct node* node  = (struct node*) malloc(sizeof(struct node));
       node->data = data;
       node->left=NULL;
       node->right=NULL;
    return(node);
    }

   struct node* insert(struct node* node,int data)
   {
      if(node==NULL)
	return (newNode(data));
      else
	  {
	      if(data<=node->data)
		 node->left=insert(node->left,data);
	      else
	      node->right=insert(node->right,data);

	     return node;
	  }
   }

  void printPostorder(struct node* node)
  {
  if(node==NULL)
    return ;
  printPostorder(node->left);
  printPostorder(node->right);
  cout<<node->data;
  }
  void printPreorder(struct node* node)
  {
  if(node==NULL)
  return;
  printPreorder(node->left);
  printPreorder(node->right);
  cout<<node->data;
  }

int main()
{
 clrscr();
 struct node* root = NULL;
 root=insert(root,4);
 insert(root,2);
 insert(root,5);
 insert(root,1);
 insert(root,6);
 printPostorder(root);
 cout<<"\n";
 printPreorder(root);
 getch();
 return 0;
 }