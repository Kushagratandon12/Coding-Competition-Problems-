#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace  std;

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

void Value(struct node* node)
{
   struct node* currentL = node;
	while(currentL->left!=NULL)
       {
	currentL = currentL->left;
       }
    struct node* currentR = node;
       while(currentR->right!=NULL)
       {
       currentR=currentR->right;
       }
}


 int main()
 {
 struct node* root = NULL;
 root=insert(root,4);
 insert(root,2);
 insert(root,5);
 insert(root,1);
 insert(root,6);
 Value(root);
 getch();
 return 0;
 }