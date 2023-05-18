#include <string>

#include "Mathematics.h"
#include "Choices.h"

Mathematics::Basic mb;
Mathematics::Advanced ma;

void Choices::Choice(std::string oper) {
	if (oper == "Add" || oper == "add") {
		mb.Add();
	}
	else if (oper == "Subtract" || oper == "Sub" || oper == "subtract" || oper == "sub") {
		mb.Subtract();
	}
	else if (oper == "Multiply" || oper == "Mul" || oper == "multiply" || oper == "mul") {
		mb.Multiply();
	}
	else if (oper == "Divide" || oper == "divide") {
		mb.Divide();
	}
	else if (oper == "Square Root" || oper == "Sqrt" || "square root" || "sqrt") {
		ma.sqr();
	}
	else if (oper == "D.B.O" || "d.b.o") {
		ma.numDiB1();
	}
}