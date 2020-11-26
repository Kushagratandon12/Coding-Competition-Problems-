#include<iostream.h>
#include<conio.h>

  struct Node
  {
  int data;
  Node* left;
  Node* right;
  };

   Node* new_node(int x)
   {
     Node* new_node = new Node();
     new_node->data = x;
     new_node->left=NULL;
     new_node->right=NULL;
     return new_node;

   }
   Node* insert(Node* root , int data)
   {
     if(root==NULL)
     {
       return new_node(data);
     }
     else
     {
	if(data<root->data)
	root->left = insert(root->left,data);
	else
	root->right=insert(root->right,data);
     }
    return (root);
   }

  int check(Node*root)
  {
     int min=root->left->data;
     int max=root->right->data;
     if(root==NULL || root->left == NULL ||root->right==NULL )
       return 1;
     if(root->data==root->left->data || root->data==root->right->data)
       return 1;
     if(min < root->data && max > root->data)
     {

     return (check(root->left)&& check(root->right));

     }
     else
     {
      return 0;
     }

 }

  void validate(Node * root)
 {
  int a;
  a=check(root);
  cout<<a;
  // cout<<root->data;
  // cout<<"\nPrimary Root Left Data\n "<<root->left->data;
  // cout<<"\n Primary Root Right Data\n"<<root->right->data;
  // root=root->right;
  // cout<<"\nRight Root Traversal\n";
  // cout<<"\nRight Node LEft Data\n"<<root->left->data;
  // cout<<"\nRight Root Right Data\n"<<root->right->data;


 }

  void main()
  {
  clrscr();
  Node* root = NULL;
  root=insert(root,1);
  insert(root,1);
 // insert(root,1);
//  insert(root,4);
//  insert(root,7);
//  insert(root,6);
//  insert(root,9);
  validate(root);
  getch();
  }
