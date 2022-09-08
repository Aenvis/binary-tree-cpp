#include <iostream>
#include "BinaryTree.h"


int main() {
	BinaryTree tree;
	tree.Insert(5);
	tree.Insert(10);
	tree.Insert(3);
	tree.Insert(8);

	std::cout << tree.FindMin();

	std::cin.get();
}