#include<iostream.h>
#include<conio.h>

	void swap(int x,int y)

	{
		int temp ;
		temp=x;
		x=y;
		y=temp;
	}



   struct Node
   {
      int info;
      Node * left;
      Node * right;
   };

   Node * newnode(int data)
   {
     Node* new_node = new Node();
     new_node->info=data;
     new_node->left=NULL;
     new_node->right=NULL;

   return new_node;

   }

   Node * insert(Node* node , int data)
   {
    if(node==NULL)
	return(newnode(data));
    else
	{
	   if(data<=node->info)
	      node->left=insert(node->left,data);
	   else
		node->right=insert(node->right,data);

	return (node);
	}
    }

    // traversing through the binary tree for output and then reversal
    void traverse(Node* node)
    {
	cout<<"\n\nLeft Hand Side\n";
	Node* currentL=node ;
	while(currentL->left!=NULL)
	{
	currentL=currentL->left;
	cout<<currentL->info<<",";
	}
	cout<<"\n\nRight hand side\n";
	// right part traversal
	Node* currentR=node;
	while(currentR->right!=NULL)
	{
	 currentR=currentR->right;
	 cout<<currentR->info<<",";
	}

    }

    Node* invert(Node* node)
    {
      if(node==NULL)
      {	return NULL; }
      Node* right = invert(node->right);
      Node* left = invert(node->left);
      node->left=right;
      node->right=left;
      return node;

    }




    int main()
    {
    clrscr();
    Node* root = NULL;
    cout<<"Construction of Binary tree\n";
    root=insert(root,4);
    insert(root,2);
    insert(root,5);
    insert(root,1);
    insert(root,6);
    insert(root,3);
    insert(root,9);
    traverse(root);
    cout<<"\n\tShould reverse\n";
    invert(root);
    traverse(root);
    getch();
    return 0 ;
    }