#include <iostream>
#include "BinaryTree.h"

int main() {
	BinaryTree tree;
	
	tree.Insert(5);
	tree.Insert(5);
	tree.Insert(1);
	tree.Insert(3);
	tree.Insert(15);
	tree.Insert(9);

	tree.InorderTraversal();
	std::cout << std::endl << tree.CheckIfBST();

	std::cin.get();
}