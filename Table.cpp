#include <iostream>
#include <string>
#include <vector>

#include "Table.h"

void Table::Spacing() {
	std::cout << "     ";
}

void Table::Options()
{
	std::vector<std::string> rows;
	std::vector<std::string> columns;

	AddRowItems(rows);
	AddCoumnItems(columns);

	for (int x = 0; x < rows.size(); x++) {
		std::cout << rows[x] << "     ";
		std::cout << "" << std::endl;
		for (int y = 0; y < columns.size(); y++) {
			std::cout << columns[y] << "     " << std::endl;
		}
	}
}

void Table::AddRowItems(std::vector<std::string>& rows)
{
	rows.push_back("Mathematics");
}

void Table::AddCoumnItems(std::vector<std::string>& colums)
{
	//colums.push_back("Mathematics");
	colums.push_back("-----------");
	colums.push_back("Add");
	colums.push_back("Subtract(Sub)");
	colums.push_back("Multiply(Mul)");
	colums.push_back("Divide");
	colums.push_back("Square Root");
	colums.push_back("D.B.O");
}

