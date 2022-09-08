#include <iostream>
#include "BinaryTree.h"


int main() {
	BinaryTree tree;
	tree.Insert(5);

	std::cout << tree.FindMax();

	std::cin.get();
}