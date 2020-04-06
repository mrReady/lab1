#include<iostream>
#include"Map.h"
int main() {
	Map<int, int>hjk;
	
	Map<int,int>* tree = new Map<int,int>();
	tree->insert(10,-1);
	tree->insert(5,-2);
	tree->insert(3,-3);
	tree->insert(11,-4);
	tree->insert(12,-5);
	tree->insert(6,-5);
	tree->insert(8,-6);
	tree->insert(9,-7);
	tree->insert(7,-8);
	//std::cout << tree->find(10) << '\n';
	//tree->remove(10);
	//std::cout << '\n';
	//tree->clear();
	//tree->printTree();
	tree->remove(8);
	//tree->remove(9);
	tree->printTree();
	//tree->get_keys();
	//tree->get_values();
	//tree->disp();
	
	system("pause");
	//tree.
	return 0;
}