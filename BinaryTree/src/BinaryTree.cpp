#include "BinaryTree.h"

BinaryTree::BinaryTree() : rootPtr(nullptr)
{
}
Node* BinaryTree::GetNewNode(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = nullptr;
	newNode->right = nullptr;
	return newNode;
}

Node* BinaryTree::Insert(Node* nodePtr, int data)
{
	if (nodePtr == nullptr) nodePtr = GetNewNode(data);
	else if (data <= nodePtr->data) nodePtr->left = Insert(nodePtr->left, data);
	else nodePtr->right = Insert(nodePtr->right, data);

	return nodePtr;
}
void BinaryTree::Insert(int data)
{
	rootPtr = Insert(rootPtr, data);
}

bool BinaryTree::Search(Node* ptr, int data)
{
	if (ptr == nullptr) return false;
	else if (ptr->data == data) return true;
	else if (data <= ptr->data) return Search(ptr->left, data);
	else return Search(ptr->right, data);

	return false;
}
bool BinaryTree::Search(int data)
{
	return Search(rootPtr, data);
}

int BinaryTree::FindMin()
{
	Node* current = rootPtr;

	while (current->left != nullptr) current = current->left;

	return current->data;
}

int BinaryTree::FindMax()
{
	Node* current = rootPtr;

	while (current->right != nullptr) current = current->right;

	return current->data;
}

