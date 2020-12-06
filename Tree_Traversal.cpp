#include<iostream>
using namespace std;

struct Tree {
	int data;
	Tree* left;
	Tree* right;
};

Tree* append(int x)
{
	Tree* new_node = new Tree;
	new_node->data = x;
	new_node->left = NULL;
	new_node->right = NULL;

	return new_node;
}





