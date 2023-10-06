// Author William Kavanagh, Abertay.
// w.kavanagh@abertay.ac.uk
// CMP201 Practical 2 -- Partial Solution.


#include <iostream>				// You may want this for testing with a main()
#include <string>				// for std::string required for ToString()
#include "LinkedList.h"	
using namespace std;			// This can stay for now. We will stop using it soon.

// No args constructor, make empty ADT
LinkedList::LinkedList() {
	head = nullptr;
}

// Single element constructor, head with node of value given
LinkedList::LinkedList(int n)
{
	// TODO - assessed [1]

	head = new Node(n);
	

}

// default destructor
LinkedList::~LinkedList()
{
}

// append element to LL with value n
void LinkedList::Insert(int n)
{
	// TODO - assessed [1]
	if (!head)
	{
		head = new Node(n);
		return;
	}
	Node* temp = head;

	while (temp->next != nullptr)
	{
		temp = temp->next;
	}

	temp->next = new Node(n);
}

// remove first instance of element with value n
void LinkedList::Remove(int n)
{
	// TODO - assessed [1]

	if (head->data == n)
	{
		head = head->next;
		return;
	}
	Node* temp = head;

	while (temp->next != nullptr)
	{
		if (temp->next->data == n)
		{
			temp->next = temp->next->next;
			return;
		}
		temp = temp->next;
	}
}

// remove all instances of element with value n
void LinkedList::RemoveAll(int n)
{
	// TODO - assessed [1]
	if (head->data == n)
	{
		head = head->next;
		
	}
	Node* temp = head;

	while (temp->next != nullptr )
	{
		if (temp->next->data == n)
		{
			temp->next = temp->next->next;
		}
		temp = temp->next;
	}
	
}

// get size of linkedlist
int LinkedList::Size()
{
	int count = 0;
	Node* temp = head;
	while (temp->next)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

// get pointer to final element in linked list
Node* LinkedList::GetTail()
{
	Node* temp = head;
	if (!head)
	{
		return nullptr;
	}
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	return temp;
}

// print out all elements in order, but pretty.
string LinkedList::ToString()
{
	// TODO - assessed [1]
	return "";
}

// Node constructor, set value to n.
Node::Node(int n)
{
	data = n;
	next = nullptr;
}

// Use for testing. Remove or comment out before submitted, or [-1]
int main()
{
	LinkedList* link = new LinkedList(5);
	link->Insert(10);
	link->Insert(10);
	link->Insert(30);

	if (link->head->next->data == 10)
	{
		cout << "insert seems to work \n";
	}

	LinkedList* linkAgain = new LinkedList();
	linkAgain->Insert(10);
	linkAgain->Insert(15);
	linkAgain->Insert(25);
	linkAgain->Remove(15);

	if (linkAgain->head->next->data == 25)
	{
		cout << "removal seems to work \n";
	}

	link->RemoveAll(10);
	if (link->head->next->data == 30)
	{
		cout << "remove all seems to work \n";
	}
}


