#include <iostream>
#include <string>

#include "txtmanipull.hpp"
#include "csvmanipull.hpp"

int main() {
	// Read a TXT
	TXTManipulation::ReadFile file1("sample_path.txt");
	file1.read(); // 0 -> No Error || 1 -> Error
	std::vector<std::string> content;
	content = file1.getValue();

	// Read a CSV
	CSVManipulation::ReadFile file2("sample_path2.csv");
	file2.read(); // 0 -> No Error || 1 -> Error
	std::vector<std::vector<std::string>> content2;
	content2 = file2.getValueCSV();

	// Write TXT
	std::vector<std::string> newContent = {"Test1\n", "Test2\n", "Test3"};
	TXTManipulation::WriteFile file3("sample_path3.txt", newContent);
	file3.write(); // 0 -> No Error || 1 -> Error

	// Write CSV
	std::vector<std::vector<std::string>> newContent2 = {{"Cell1", "Cell2", "Cell3"}, {"Cell4", "Cell5", "Cell6"}, {"Cell7", "Cell8", "Cell9"}};
	CSVManipulation::WriteFile file4("sample_path4.csv", newContent2);
	file4.write(); // 0 -> No Error || 1 -> Error
	return 0;
}