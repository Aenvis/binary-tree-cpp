#pragma once
struct Node
{
	Node* left;
	int data;
	Node* right;
};

class BinaryTree
{
private:
	Node* rootPtr;
	
	Node* Insert(Node* ptr, int data);
	bool Search(Node* ptr, int data);
	int FindMin(Node* ptr);
	int FindMax(Node* ptr);
public:
	BinaryTree();
	Node* GetNewNode(int data);
	void Insert(int data);
	bool Search(int data);
	int FindMin();
	int FindMax();
};

