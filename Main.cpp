#include <iostream>
#include <string>

#include "Table.h"
#include "Choices.h"
using namespace std;

Table table;
Choices ch;

int main() {
	string oper;

	cout << "What would you like to do? Here are some options: " << endl;

	cout << "" << endl;

	table.Options();

	cout << "" << endl;
	cin >> oper;
	ch.Choice(oper);

}