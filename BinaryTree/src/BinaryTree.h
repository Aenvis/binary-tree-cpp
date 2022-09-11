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
	Node* m_rootPtr;
	
	Node* _insert(Node* ptr, int data);
	bool _search(Node* ptr, int data);
	int _findMin(Node* ptr);
	int _findMax(Node* ptr);
	int _getRootHeight(Node* ptr);
	void _preorderTraversal(Node* ptr);
	void _inorderTraversal(Node* ptr);
	void _postorderTraversal(Node* ptr);
	bool _checkIfBST(Node* ptr, int minValue, int maxValue); //Check if a binary tree is the binary search tree
	bool _isSubtreeLesser(Node* ptr, int data);
	bool _isSubtreeGreater(Node* ptr, int data);
	void _delete(Node* ptr, int data);

public:
	BinaryTree();
	Node* GetNewNode(int data);
	void Insert(int data);
	bool Search(int data);
	int FindMin();
	int FindMax();
	int GetRootHeight();
	void PreorderTraversal();
	void InorderTraversal();
	void PostorderTraversal();
	void LevelOrderTraversal();
	bool CheckIfBST();
	void Delete(int data);

public:
	void dev_ForceLeftLink(int data);
};

