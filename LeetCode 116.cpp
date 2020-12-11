#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

struct Node
{
	int val;
	Node* left;
	Node* right;
	Node* next;

};

Node* new_insert(int data)
{
	Node* root = new Node();
	root->val = data;
	root->left = NULL;
	root->right = NULL;
	root->next = NULL;
	return(root);
}

Node* insert(Node* root, int data)
{
	if (root == NULL)
		return(new_insert(data));
	else
	{
		if (data <= root->val)
			root->left = insert(root->left, data);
		else
			root->right = insert(root->right, data);
		return (root);
	}
}

vector<int> smallest;
void insertion_data (Node* root)

{
	if (root == NULL)
	{
		return; 
	}
	insertion_data(root->left);
	smallest.push_back(root->val);
	insertion_data(root->right);
}

void kth_smallest()
{

	sort(smallest.begin(), smallest.end());
	for (auto it = smallest.begin(); it != smallest.end(); it++)
	{
		cout << *it;
	}
	int target = 3;
	cout << "\nThe 3rd Smallest Number In The BST ---- ";
	cout << smallest[target-1];
}


void main()
{
	Node* root = NULL;
	root = insert(root, 1);
	root = insert(root, 2);
	root = insert(root, 3);
	root = insert(root, 4);
	root = insert(root, 5);
	root = insert(root, 6);
	root = insert(root, 7);

	cout << "Showing The Data Put On The Vector / Array" << endl;
	insertion_data(root);
	kth_smallest();

}

