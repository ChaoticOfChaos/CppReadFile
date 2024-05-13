#include <iostream>
#include <string>

#include "ReadFile.hpp"

int main() {
	// Read a TXT
	readFileClass file1("sample_path.txt");
	file1.read(); // 0 -> No Error || 1 -> Error
	std::vector<std::string> content;
	content = file1.getValue(); // Return a std::vector<std::string>

	readFileClass file2("sample_path2.csv", "csv");
	file2.read(); // 0 -> No Error || 1 -> Error
	std::vector<std::vector<std::string>> content2;
	content2 = file2.getValueCSV(); // Return a std::vector<std::vector<std::string>>
	
	return 0;
}