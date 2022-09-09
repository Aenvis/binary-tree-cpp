#include <iostream>
#include "BinaryTree.h"

int main() {
	BinaryTree tree;
	
	tree.Insert(5);
	tree.Insert(10);

	std::cout << tree.CheckIfBST();

	std::cin.get();
}