#include <iostream>
#include <fstream>
#include <string>

void patternMatch(std::string text, std::string pattern) {
	//here is where we will call the pattern matching functions
	std::cout<<" text: "<<text<<std::endl;
	std::cout<<" pattern: "<<pattern<<std::endl;
}

int main(int argc, char ** argv) {
	std::string line;
	std::ifstream file (argv[1]);
	std::string text = "";
	std::string pattern = "";

	try {
		if (file) { //make sure file exists
			while (std::getline (file, line)) {
				text += line;
			}
		}
		if (argv[2]) {
			pattern += argv[2];
		} else {
			pattern = "default";
		}
		if (text.size() == 0) {
			throw 20;
		}

		patternMatch(text, pattern);

	} catch (...) {
		std::cout<< " Exception occurred: check if  "<<argv[1]<<" exists and contains text"<<std::endl;
	}
}
