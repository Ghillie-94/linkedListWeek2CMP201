
#pragma once
class Node
{
public:
	int data;
	Node* next;

	Node(int n);
};

class LinkedList
{
public:
	Node* head;

	LinkedList();
	LinkedList(int n);
	~LinkedList();

	void Insert(int n);
	void Remove(int n);
	void RemoveAll(int n);
	int Size();
	Node* GetTail();
	std::string ToString();
	
};


