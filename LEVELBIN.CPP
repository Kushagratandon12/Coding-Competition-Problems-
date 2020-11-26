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
     Node* root=new Node();
     root->data=x;
     root->left=NULL;
     root->right=NULL;
     return(root);

   }

   Node* insert(Node* root,int data)
   {
      if(root==NULL)
	 return(new_node(data));
      else
       {
	 if(data<root->data)
	    root->left=insert(root->left,data);
	 else
	     root->right=insert(root->right,data);
       return (root);
       }
  }



void Value(Node* root)
{
  if(root==NULL)
   return ;
  else
    cout<<root->data;
    Value(root->left);
    Value(root->right);

}

int height(Node* root)
{
   if(root==NULL)
     return 0;
   else
   {
      int lefth=height(root->left);
      int righth=height(root->right);

      if(lefth>righth)
	 return(lefth+1);
      else
	  return(righth+1);

   }

}

void printlevel_order(Node* root , int s)
{

 if(root==NULL)
    return ;
 if(s==1)
   cout<<"[ "<<root->data <<"]\n";
 else if(s>1)
 {
    printlevel_order(root->left,s-1);
    printlevel_order(root->right,s-1);
 }

}
void printorder(Node* root)
{
  int h = height(root);
  for(int i=0 ; i<=h ; ++i)
     printlevel_order(root,i);
}


 int main()
 {
 clrscr();
 Node* root = NULL;
 root=insert(root,4);
 insert(root,2);
 insert(root,6);
 insert(root,1);
 insert(root,3);
 insert(root,5);
 insert(root,7);
// Value(root);
 printorder(root);
 getch();
 return 0;
 }