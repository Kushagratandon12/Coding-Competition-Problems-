#include<iostream>
#include<conio.h>
#include<set>
#include<stack>
#include<algorithm>


using namespace std;
struct Node
{
	int data;
	Node* next;
};

void append(Node** head, int x)
{
	Node* new_node = new Node();
	new_node->data = x;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}
	Node* last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
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


void swap_node(Node* head)
{
	if (
		head==NULL)
		return;
	else
	{
		Node* p1 = head;
		Node* p2 = p1->next;
		swap(p1->data, p2->data);
		swap_node(p2->next);
	}
}

void join(Node* head, Node* target)
{
	Node* last = head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next= target;
}

int cycle_detect(Node* head)
{
	Node* slow = head, * fast = head;
	int count_slow_pos = -1;
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		count_slow_pos++;
		if (slow == fast)
		{
			return (count_slow_pos-1);
		}


	}
}

void sort_linked(Node* node)
{
	set<int> sortred_elements;
	Node* temp = node;
	while (temp != NULL)
	{
		sortred_elements.insert(temp->data);
		temp = temp->next;;
	}

	cout << "Data stored in the linked list passed to the vetor ";
	for (auto i = sortred_elements.begin(); i != sortred_elements.end(); i++)
	{
		cout << *i;
	}

}

// Palindrome 
void stack_palindrome(Node* head)
{
	stack<int> pali;
	Node* temp = head;
	while (temp != NULL)
	{
		pali.push(temp->data);
		temp = temp->next;
	}
	// completed the insertion in the stack 
		while(!pali.empty())
		{
			int nos;
			nos = pali.top();
			pali.pop();
			if (nos == head->data)
			{
				head = head->next;
			}

			else
			{
				cout << "Not Palindrome";
				return; 
			}

		}
		cout << "\n\n Palindrome Linked List";
}


void partion(Node* head,int x)
{
	Node* Left = new Node();
	Node* Right = new Node();
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data < x)
		{
			append(&Left, temp->data);
		}
		else
		{
			append(&Right, temp->data);
		}
		temp = temp->next;
	}
	Left->next = Right;
	Right->next = NULL;
	Print(Left);

}

//LeetCode 143
void reorder(Node* head)
{
	Node* temp;
	Node* reorder; 
	Node* last = head;
	temp = head->next;
	while (last->next->next != NULL)
	{
		last = last->next;
	}
	reorder = last->next;
	last->next = NULL;
	head->next = reorder;
	reorder->next = temp;
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
		append(&head, 2);
	//	Print(head);
	cout<<"Joining and detection of the cycle in the linked list\n";
	//	cout << "Swapping up the node" << endl;
	//	swap_node(head);
	//	Node* head2 = NULL;
//		append(&head2, 3);
	//	append(&head2, 2);
//		append(&head2, 0);
//		append(&head2, 4);
//		Print(head2);
	//	join(head2, head2->next);
	//	int a = cycle_detect(head2);
	//	cout <<"Position of the cycle start "<< a<<endl;
	//	sort_linked(head2);
	//	stack_palindrome(head);
	//	reorder(head2);
		partion(head, 3);
}