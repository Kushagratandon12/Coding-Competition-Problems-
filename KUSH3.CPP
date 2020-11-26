#include<iostream.h>
#include<conio.h>

 struct Node
 {
   int data;
   Node* left;
   Node* right;
 };

  Node*  new_node(int x)
  {
    Node* root = new Node();
    root->data=x;
    root->left=NULL;
    root->right=NULL;

    return(root);

  }

  Node* insert(Node* root , int data )
  {
     if(root==NULL)
	 return (new_node(data));
     else
     {
       if(data<root->data)
	  root->left = insert(root->left,data);
       else
	  root->right = insert(root->right,data);

     return(root);

     }


  }

   int height(Node* root)
   {
       if(root==NULL)
       {
       return 0;
       }
       else
       {
	int left_height= height(root->left);
	int right_height=height(root->right);
	  if(left_height)
	     return(left_height+1);
	  else
	     return(right_height+1);

       }

   }

 void main()
 {
 clrscr();
  Node* root = NULL;
  root= insert(root,5);
  insert(root,2);
  insert(root,9);
  insert(root,1);
  insert(root,3);
  insert(root,7);
  insert(root,10);
  int a=height(root);
  cout<<a;
  getch();
 }

