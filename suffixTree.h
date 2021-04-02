#pragma once

#include <string>
#include <iostream>

/*** suffix tree defenition for pattern matching **/

//tree data structure for containing suffixes
class NaryTree {
	public:
		//each tree will contain nodes
		struct Node {
			//every node will contain a map to child nodes
			std::map<std::string, Node*> children;


		};
};
