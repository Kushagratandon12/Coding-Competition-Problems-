#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
#include<list>
#include<queue>
#include<map>

using namespace std;

struct Node
{	int data;
	Node* left;
	Node* right;
};



Node* creation(int x)
{
	Node* new_node = new Node();
	new_node->data = x;
	new_node->left = NULL;
	new_node->right = NULL;
	return(new_node);
}

Node* insert(Node* root, int data)
{
	if (root == NULL)
		return(creation(data));
	else
	{
		if (data < root->data)
			root->left = insert(root->left, data);
		else
			root->right = insert(root->right, data);
	
		return(root);

	}

}


void traversal(Node* root)
{

	list<Node*> queue;
	queue.push_back(root);
	Node* curr = nullptr;
	while (queue.size())
	{
		curr = queue.front();
		queue.pop_front();
		cout << curr->data<<" ";
		if (curr->left)
			queue.push_back(curr->left);
		if (curr->right)
			queue.push_back(curr->right);
		
	}

}




int height(Node* root)
{
	if (root == NULL)
		return 0;
	else
	{
		int left_h = height(root->left);
		int right_h = height(root->right);
		if (left_h > right_h)
			return(left_h + 1);
		else
			return(right_h + 1);


	}
}

//x->1 , left->2 , right->3;
//x->2,left->4,right->5; and x->3 , left-.6 , right->7

int validatation(Node* root)
{


	if (root == NULL || root->left == NULL || root->right == NULL)
		return 1;
	long  int min = root->left->data;
	long  int max = root->right->data;
	if (min<root->data && max>root->data)
	{
		return(validatation(root->left) && validatation(root->right));
	}
	else
	{
		return 0;
	}
}


//leet code 108 Medium 


//Leetcode Binary Tree In Vertical Order Traversal 




void main()
{
	Node* root = NULL;
		root = insert(root, 1);
		insert(root, 2);
		insert(root, 3);
		insert(root, 4);
		insert(root, 5);
		insert(root, 6);
		insert(root, 7);
		insert(root, 8); 
		insert(root, 9);
		insert(root, 10);
		insert(root, 11);
	//	traversal(root);
	//	int size = height(root);
	//	cout <<"\nThe Size of the Binary Tree is ---  "<< size <<endl;
	//	int a = validatation(root);
	//	cout << "Checking the validation "<<a;
	//search()
		
}