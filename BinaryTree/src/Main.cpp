#include <iostream>
#include "BinaryTree.h"


int main() {
	BinaryTree tree;
	tree.Insert(5);
	tree.Insert(5);
	tree.Insert(5);
	tree.Insert(5);

	int x;

	while (std::cin >> x)
	{
		if (tree.Search(x)) std::cout << "The tree contains " << x << ".\n";
		else std::cout << x << " not found in the tree.\n";
	}

	std::cin.get();
}