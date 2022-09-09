#include <iostream>
#include "BinaryTree.h"

int main() {
	BinaryTree tree;
	
	tree.Insert(5);
	tree.Insert(3);
	tree.Insert(10);
	tree.Insert(8);
	tree.Insert(4);
	tree.Insert(5);
	tree.Insert(5);
	tree.Insert(11);
	tree.Insert(2);
	tree.Insert(0);
	tree.Insert(3);

	tree.PreorderTraversal();

	std::cin.get();
}