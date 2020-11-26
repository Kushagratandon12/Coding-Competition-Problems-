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
    new_node->data =x;
    new_node->left=NULL;
    new_node->right=NULL;

    return (new_node);
  }

   Node* insert(Node* root , int data)
   {
     if(data==NULL)
     {
	return 0;
     }
     if(root==NULL)
      {
	  return(new_node(data));
      }
      else
       {
	  if(data<root->data)
	  root->left=insert(root->left,data);
	  else
	  root->right=insert(root->right,data);

	  return(root);
       }

    }

    void Inorder(Node* root)
    {
       if(root==NULL)
       {
	 return ;
       }
       Inorder(root->left);
       cout<<root->data;
       Inorder(root->right);

    }

  int main()
  {
  clrscr();
  Node* root = NULL;
  root=insert(root,5);
  insert(root,1);
  insert(root,NULL);
  insert(root,4);
  insert(root,3);
  insert(root,6);
  Inorder(root);
  getch();

  return 0;
  }