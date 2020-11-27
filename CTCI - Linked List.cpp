#include<iostream>
#include<unordered_set>
#include<conio.h>
#include<stack>

using namespace::std;


struct Node {
	int data;
	Node* next;
};

void append(Node** head, int data)
{
	Node* new_node = new Node();
	
	new_node->data = data;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}
   Node* temp = *head;
   while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		return;
}


void Print(Node* head)
{
	int count = 0;
	Node* temp = head;
	cout << "\nList Is : - ";
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->next;
		count++;
	}
	cout << "\n";
	cout << "Length Of The List " << count << " & for middle element " << count / 2 << " \n";
}


//CTCI PROGRAM 

void remove_dups(Node* head)
{
	unordered_set<int> rem_dups;
	Node* temp = head;
	Node* prev = temp;
	while (temp != NULL)
	{

		if (find(rem_dups.begin(), rem_dups.end(), temp->data) != rem_dups.end())
		{
			cout << "\n\nDublicate Found";
			cout << prev->data;
			break;
		}
		else
		{
			rem_dups.insert(temp->data);
		}
		prev = temp;
		temp = temp->next;
	}
	prev->next = prev->next->next;
	Print(head);
}

void Delete_Middle(Node* head)
{
	Node* temp = head;
	Node* fast = temp;;
	Node* slow = temp;
	while (fast && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	cout << slow->data;
	//for the kth_ from the last  move fast pointer k times forward than the slow pointer
}

void Partition()
{
	Node* partion = NULL;
	append(&partion, 3);
	append(&partion, 5);
	append(&partion, 8);
	append(&partion, 5);
	append(&partion, 10);
	append(&partion, 2);
	append(&partion, 1);

	Node* left=NULL;
	Node* right=NULL;
	int part_in = 5;
	Node * temp = partion;
	while (temp != NULL)
	{
		if (temp->data < part_in)
		{
			append(&left, temp->data);

		}
		else
		{
			append(&right, temp->data);
		}
		temp = temp->next;
	}
	Node* joiner = left;
	while (joiner->next!= NULL)
	{
		joiner = joiner->next;
	}
	joiner->next = right;
	Print(left);
}

void Palindrome()
{
	Node* pali = NULL;
	append(&pali, 1);
	append(&pali, 2);
	append(&pali, 1);
	stack<int> check_pali;
	Node* temp = pali; 
	while (temp != NULL)
	{
		check_pali.push(temp->data);
		temp = temp->next;
	}
	cout << "\n";
	Node* check = pali;
	while (check != NULL)
	{
		int val = check_pali.top();
		if (val != check->data)
		{
			cout << "Not A Palindrome";
			return;
		}
		check = check->next;
		check_pali.pop();
	}
	cout << "Palindrome";
}

void main()
{
	//empty list
	Node* head = NULL;
	append(&head, 1);
	append(&head, 4);
	append(&head, 3);
	append(&head, 2);
	append(&head, 5);
	append(&head, 9);
	append(&head, 6);
	//Print(head);
	//remove_dups(head);
	//Delete_Middle(head);
	//Partition();
	Palindrome();
}
