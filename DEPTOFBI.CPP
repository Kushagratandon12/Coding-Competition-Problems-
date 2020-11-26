#include<iostream.h>
#include<conio.h>

   class Node {
   public:
   int info;
   Node* left;
   Node* right;
   };

   Node* newnode(int data)
   {
    Node *node = new Node;
    node->info=data;
    node->left=NULL;
    node->right=NULL;

    return(node);
   }

   int maxDept(Node* node)
   {

      if(node==NULL)
       return 0;
      else
      {
      int ldepth = maxDept(node->left);
      int rdepth = maxDept(node->right);

	if(ldepth>rdepth)
		return (ldepth+1);
	else
		return(rdepth+1);
	}
   }

   int main()
   {
   clrscr();
   Node * root = newnode(1);
   root->left=newnode(4);
   root->right=newnode(5);
   root->left->left=newnode(7);
   root->right->right=newnode(5);
   cout<<maxDept(root);
   getch();
   return 0;
   }