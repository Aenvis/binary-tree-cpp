#include "BinaryTree.h"
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <queue>

BinaryTree::BinaryTree() : m_rootPtr(nullptr)
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

#pragma region Basic data structure functionality
Node* BinaryTree::_insert(Node* nodePtr, int data)
{
	if (nodePtr == nullptr) nodePtr = GetNewNode(data);
	else if (data <= nodePtr->data) nodePtr->left = _insert(nodePtr->left, data);
	else nodePtr->right = _insert(nodePtr->right, data);

	return nodePtr;
}
void BinaryTree::Insert(int data)
{
	m_rootPtr = _insert(m_rootPtr, data);
}

bool BinaryTree::_search(Node* ptr, int data)
{
	if (ptr == nullptr) return false;
	else if (ptr->data == data) return true;
	else if (data <= ptr->data) return _search(ptr->left, data);
	else return _search(ptr->right, data);

	return false;
}
bool BinaryTree::Search(int data)
{
	return _search(m_rootPtr, data);
}

int BinaryTree::_findMin(Node* ptr)
{
	if (ptr->left != nullptr) return _findMin(ptr->left);
	
	return ptr->data;
}
int BinaryTree::_findMax(Node* ptr)
{
	if (ptr->right != nullptr) return _findMax(ptr->right);

	return ptr->data;
}
int BinaryTree::FindMin()
{
	if (m_rootPtr == nullptr) return -1;
	return _findMin(m_rootPtr);
}
int BinaryTree::FindMax()
{
	if (m_rootPtr == nullptr) return -1;
	return _findMax(m_rootPtr);
}

int BinaryTree::_getRootHeight(Node* ptr)
{
	if (ptr == nullptr) return -1;

	return std::max(_getRootHeight(ptr->left), _getRootHeight(ptr->right)) + 1;
}
int BinaryTree::GetRootHeight()
{
	return _getRootHeight(m_rootPtr);
}
#pragma endregion

#pragma region Traversal -- Depth-first strategy
void BinaryTree::_preorderTraversal(Node* ptr)
{
	if (ptr == nullptr) return;

	std::cout << ptr->data << " ";

	_preorderTraversal(ptr->left);
	_preorderTraversal(ptr->right);
}
void BinaryTree::PreorderTraversal()
{
	_preorderTraversal(m_rootPtr);
}

void BinaryTree::_inorderTraversal(Node* ptr)
{
	if (ptr == nullptr) return;
	_inorderTraversal(ptr->left);
	std::cout << ptr->data << " ";
	_inorderTraversal(ptr->right);
}
void BinaryTree::InorderTraversal()
{
	_inorderTraversal(m_rootPtr);
}

void BinaryTree::_postorderTraversal(Node* ptr)
{
	if (ptr == nullptr) return;
	_postorderTraversal(ptr->left);
	_postorderTraversal(ptr->right);
	std::cout << ptr->data << " ";
}
void BinaryTree::PostorderTraversal()
{
	_postorderTraversal(m_rootPtr);
}
#pragma endregion

#pragma region Traversal -- Breadth-first strategy
void BinaryTree::LevelOrderTraversal()
{
	if (m_rootPtr == nullptr) return;

	std::queue<Node*> q;
	q.push(m_rootPtr);
	Node* current;
	while (!q.empty())
	{
		current = q.front();
		std::cout << current->data << " ";
		if(current->left != nullptr) q.push(current->left);
		if (current->right != nullptr) q.push(current->right);
		q.pop();
	}
}
#pragma endregion

bool BinaryTree::_checkIfBST(Node* ptr)
{
	if (m_rootPtr == nullptr) return true;

	if (ptr->left != nullptr)
	{
		if (ptr->left->data > ptr->data) return false;
		_checkIfBST(ptr->left);
	}
	if (ptr->right != nullptr)
	{
		if (ptr->right->data <= ptr->data) return false;
		_checkIfBST(ptr->right);
	}

	return true;
}
bool BinaryTree::CheckIfBST()
{
	return _checkIfBST(m_rootPtr);
}

#pragma region dev
void BinaryTree::dev_ForceLeftLink(int data)
{
	Node* temp = GetNewNode(data);
	m_rootPtr->left = temp;
}
#pragma endregion
