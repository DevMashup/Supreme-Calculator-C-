#pragma once
#include <vector>

class Table {
public:
	void Spacing();
	void Options();
	void AddRowItems(std::vector<std::string>& rows);
	void AddCoumnItems(std::vector<std::string>& colums);
};