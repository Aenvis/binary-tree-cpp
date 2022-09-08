#include <iostream>
#include "BinaryTree.h"


int main() {
	BinaryTree tree;
	tree.Insert(5);
	tree.Insert(5);
	tree.Insert(5);


	std::cout << tree.GetHeight();

	std::cin.get();
}