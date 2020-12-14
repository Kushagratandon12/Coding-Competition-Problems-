#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<set>
#include<unordered_map>

using namespace std;
void two_city_scheduling()
{
	vector<vector<int>> costs{ {10,20} , {30,200} , {400,50} , {30,20} };
	sort(costs.begin(), costs.end(), [](const vector<int>& a, const vector<int>& b) {
				return ((a[0] - a[1]) < (b[0] - b[1]));
		});
	int cost = 0;
	for (int i = 0; i < costs.size()/2 ; i++)
	{
		cost += costs[i][0];
	}
	for (int i = costs.size() / 2 ; i<costs.size(); i++)
	{
		cost += costs[i][1];
	}
	cout << cost;
}

void swap_seg(char a, char b)
{
	char temp;
	temp = a;
	a = b;
	b = temp;
}

void reverse_string()
{
	vector<char> string{ 'k','u','s','h','a','g','r','a' };
	int n = string.size();
	for (int i = 0; i < n / 2; i++)
		swap(string[i], string[n - i - 1]);

	for (int i = 0; i < n; i++)
	{
		cout << string[i];
	}

}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

void code_chef_problem()
{
	vector<int> input{ 5, 4, 8, 6, 9 };
	//set for maininting the max numbers because we have to check for dublicacy also which set stops
	set<int> max_cal;
	int size = input.size(), i = 1;
	while (i < size)
	{
		int ele = max(input[0], input[i]);
		if (find(max_cal.begin(), max_cal.end(), ele) != max_cal.end())
		{
			i++;
		}
		else
		{
			max_cal.insert(ele);
			i++;
		}
	}

	for (auto i = max_cal.begin(); i != max_cal.end(); i++)
	{
		cout << *i;
	}

}

struct Node
{
	int data;
	Node* next;
};

void append(Node** head, int x)
{
	Node* new_node = new Node();
	Node* last = *head;
	new_node->data = x;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

void print_linked_list(Node* head)
{
	Node* last = head;
	while (last!= NULL)
	{
		cout << last->data;
		last = last->next;
	}
}



void rotate_linked_list(Node* head, int size , int k)
{
	Node* rotate = head;
	Node* point;
	Node* previous = NULL;
	int rotate_point = size - k;
	for (int i = 0; i <rotate_point;i++)
	{
		previous = rotate;
		rotate = rotate->next;
	}
	point = rotate;
	while (rotate->next != NULL)
	{
		rotate = rotate->next;
	}
	rotate->next = head;
	previous->next = NULL;
	head = point;
	cout << "\n\n";
	cout << "Rotatation of the liked list " << "\n";
	print_linked_list(head);
}


void smaller_nos()
{
	vector<int> nums{ 8,1,2,2,3 };
	vector<int> sorted;
	vector<int> result;
	vector<int> ::iterator it;
	for (int i = 0; i < nums.size(); i++)
	{
		sorted.push_back(nums[i]);
	}
	sort(sorted.begin(), sorted.end());
	for (int i = 0; i < nums.size(); i++)
	{
		it = find(sorted.begin(), sorted.end(), nums[i]);
		result.push_back(it - sorted.begin());
	}
	for (auto i = result.begin(); i != result.end(); i++)
	{
		cout << *i;
	}
}

void dublicate_array()
{
	unordered_set<int> dub;
	unordered_set<int> data;
	vector<int> nos{ 3,1,3,4,2 };
	for (int i = 0; i < nos.size(); i++)
	{
		if (data.find(nos[i]) == data.end())
		{
			data.insert(nos[i]);
		}
		else
		{
			dub.insert(nos[i]);
		}
	}
	int ele;
	for (auto i = dub.begin(); i != dub.end(); i++)
	{
		ele =  *i;
	}
	cout << ele;
}


void unique_nos_occurences()
{
	vector<int> arr{ -3,0,1,-3,1,1,1,-3,10,0 };
	unordered_map<int,int> unique;	
	// traversing the array and maintaing the hash table and in the second set maintaining the occurances 
	for (int i =0 ;i<arr.size();i++)
	{
		unique[arr[i]]++;
	}
	for (auto x:unique)
	{
		cout << x.first <<" " << x.second<<"\n";
	}
	set<int> occurances; 
	for (auto i = unique.begin(); i != unique.end(); i++)
	{
		if (find(occurances.begin(), occurances.end(), i->second) == occurances.end())
		{
			occurances.insert(i->second);
		}
		else
		{
			cout << "FALSE";
			return;
		}
	}
	cout << "TRUE";
}



void top_freq()
{
	unordered_map<int, int> freq_occur;
	vector<int> nums{7,10,11,5,2,5,5,7,11,8,9};
	vector<int> result;
	for (auto i = 0 ; i<nums.size(); i++)
	{
		freq_occur[nums[i]]++;
	}

	for (auto i = freq_occur.begin(); i != freq_occur.end(); i++)
	{
		cout <<i->first <<" --->  " <<i->second<<"\n";
	}
	// select only those elements whose occurances are greater than or equal k 
	int k = 4;
	for (auto i = freq_occur.begin(); i != freq_occur.end(); i++)
	{
		if(i->second >= k )
		{ 
			result.push_back(i->first);
		}
		 
	}

	for (auto i = result.begin(); i != result.end(); i++)
	{
		cout << *i;
	}

}

// CREATING A BINARY TREE OR AS AN BINARY SEARCH TREE

struct Tree
{
	int data;
	Tree* left;
	Tree* right;
};

Tree* append(int data)
{
	Tree* root = new Tree();
	root->data = data;
	root->left = NULL;
	root->right = NULL;

	return root;
}

Tree* append_tree(Tree* root,int data)
{

	if (root == NULL)
	{
		return append(data);
	}
	else
	{
		if (root->data <= data)
			root->left = append_tree(root->left, data);
		else
			root->right = append_tree(root->right, data);

		return root;
	}
}


void right_traversal(Tree* root)
{
	if (root == NULL)
		return ;
	else
	{
		cout << root->data;
		right_traversal(root->right);
	}

}





int main()
{
	//two_city_scheduling();
	//reverse_string();
	//code_chef_problem();
	Node* head = NULL;
	append(&head, 1);
	append(&head, 1);
	append(&head, 2);
	append(&head, 3);
	append(&head, 3);
	//cout << "Rotation the linked list by specified amount";
	//rotate_linked_list(head, 5,2);
	//cout << "\n Removing the duplicates\n\n";
	//smaller_nos();
	//dublicate_array();
	//unique_nos_occurences();
	//top_freq();


	// BINARY TREE RIGHT SIDE VIEW
	Tree* root = NULL;
	root = append_tree(root, 1);
	append_tree(root, 2);
	append_tree(root, 3);
	append_tree(root, 5);
	append_tree(root, 6);
	append_tree(root, 7);
	append_tree(root, 8);
	right_traversal(root);
	return 0;
}