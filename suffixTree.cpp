#include "suffixTree.h"
#include <vector>
#include <exception>


NaryTree::NaryTree() { 
	
}

NaryTree::~NaryTree() {
	try {

	} catch (std::exception e) {
		throw (e);
	}

}

NaryTree::Node* NaryTree::getRoot() const {
	return this->root;
}

/*
 * returns the height of the tree
 */
int NaryTree::getHeight() const {
	return getHeightHelper(this->root);
}

int NaryTree::getHeightHelper(Node* node) const {
	if (node == NULL) {
		return -1;
	}


	int max = -1;

	for (auto it = (node->children).begin(); it != node->children.end(); it++) {
		int temp = getHeightHelper(it->second);
		if (temp >= max) {
			max = temp;
		}
	}
	return 1 + max;

}




