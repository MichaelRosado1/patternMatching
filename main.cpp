#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char ** argv) {
	std::string line;
	std::ifstream file (argv[1]);

	if (file) {
		while (std::getline (file, line)) {
			std::cout<<line<<std::endl;
		}
	}
}
