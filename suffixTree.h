#pragma once

#include <string>
#include <iostream>
#include <map>

/*** suffix tree defenition for pattern matching **/

//tree data structure for containing suffixes

class NaryTree {
	public:
		//each tree will contain nodes
		struct Node {
			//every node will contain a map to child nodes
			std::map<std::string, Node*> children;

			//index vector will contain the occurances of the specific pattern
			//in the text
			std::vector<int> index; 

			//Node constructor
			//for a suffix tree we are going to want to store the 
			Node(std::string s, int i) {
				if (s.length() > 0) {
					//recursive defenition of the node
					children[s[0]] = new Node(s.substr(1, i));
				} else {
					index.push_back(i);
				}
			}

			std::bool isLeaf() {
				if (children.size() == 0) {
					return true;
				} else {
					return false;
				}
			}

		};

		//NaryTree constructor
		NaryTree();

		//NaryTree destructor
		~NaryTree();		

		//@return the root of the tree
		Node* getRoot() const; 

		//@return the height of the tree
		int getHeight() const;
		
	private:
		Node* root;

		int getHeightHelper(Node* node) const;
};
