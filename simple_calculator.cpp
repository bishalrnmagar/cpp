#include <iostream>
#include <string>

using namespace std;

class Calculator {
public:
	Calculator(double num1, double num2): num1(num1), num2(num2) {}

	double sum() {
		return num1 + num2;
	}

	double diff() {
		return num1 - num2;
	}

	double multiply() {
		return num1 * num2;
	}

	double division() {
		if (num2 != 0) {
			return num1/num2;
		}
		else {
			cerr << "Divisor can't be 0"  << endl;
			return 0;
		}

	}

private:
	double num1, num2;
};

int main() {
	void result(double result);

	char operation;
	double num1, num2;

	cout << "Enter an operation (+, -, *, /): ";
	cin >> operation;


	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	Calculator calc(num1, num2);

	switch (operation) {
		case '+':
			result(calc.sum());
			break;
		case '-':
			result(calc.diff());
			break;
		case '*':
			result(calc.multiply());
			break;
		case '/':
			result(calc.division());
			break;
		default:
			cerr << "Unsupported operation" << endl;
	}
}

void result(double result) {
	cout << "Result: " << result << endl;
}
