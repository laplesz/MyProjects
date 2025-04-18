#include <iostream>
#include <cmath>

using namespace std;

int action;
double result, num1, num2;

namespace math_operators
{
	int sum(int num1, int num2);
	double sum(double num1, double num2);
	int substruct(int num1, int num2);
	double substruct(double num1, double num2);
	int multiply(int num1, int num2);
	double multiply(double num1, double num2);
	int divide(int num1, int num2);
	double divide(double num1, double num2);
	int power(int result, int num1, int num2);
	double power(double result, double num1, double num2);
	int module(int result, int num1);
	double module(double result, double num1);
	int root(int num1);
	double root(double num1);
}

int math_operators::sum(int num1, int num2) { return num1 + num2; }
double math_operators::sum(double num1, double num2) { return num1 + num2; }
int math_operators::substruct(int num1, int num2) { return num1 - num2; }
double math_operators::substruct(double num1, double num2) { return num1 - num2; }
int math_operators::multiply(int num1, int num2) { return num1 * num2; }
double math_operators::multiply(double num1, double num2) { return num1 * num2; }
int math_operators::divide(int num1, int num2) { return num1 / num2; }
double math_operators::divide(double num1, double num2) { return num1 / num2; }
int math_operators::power(int result, int num1, int num2) {
	result = 1;
	for (int i = 0; i < num2; i++)
	{
		result *= num1;
	}
	return result;
}
double math_operators::power(double result, double num1, double num2) {
	result = 1;
	for (int i = 0; i < num2; i++)
	{
		result *= num1;
	}
	return result;
}
int math_operators::module(int result, int num1) { return result < 0 ? -num1 : num1; }
double math_operators::module(double result, double num1) { return result < 0 ? -num1 : num1; }
int math_operators::root(int num1) { return sqrt(num1); }
double math_operators::root(double num1) { return sqrt(num1); }


void calculator()
{
	cout << "-----------CALCULATOR-----------" << endl;
	cout << "1: +" << endl;
	cout << "2: -" << endl;
	cout << "3: *" << endl;
	cout << "4: /" << endl;
	cout << "5: ^x" << endl;
	cout << "6: |x|" << endl;
	cout << "7: x^1/2" << endl;
	cout << "Enter a number to choose operation: ";
	cin >> action;

	switch (action)
	{
	case 1:
	{
		cout << "x + y" << endl;
		cout << "Input 2 numbers: ";
		cin >> num1 >> num2;
		cout << num1 << " + " << num2 << " = " << math_operators::sum(num1, num2);
		break;
	}
	case 2:
	{
		cout << "x - y" << endl;
		cout << "Input 2 numbers: ";
		cin >> num1 >> num2;
		cout << num1 << " - " << num2 << " = " << math_operators::substruct(num1, num2);
		break;
	}
	case 3:
	{
		cout << "x * y" << endl;
		cout << "Input 2 numbers: ";
		cin >> num1 >> num2;
		cout << num1 << " * " << num2 << " = " << math_operators::multiply(num1, num2);
		break;
	}
	case 4:
	{
		cout << "x / y" << endl;
		cout << "Input 2 numbers: ";
		cin >> num1 >> num2;
		cout << num1 << " / " << num2 << " = " << math_operators::divide(num1, num2);
		break;
	}
	case 5:
	{
		cout << "^x" << endl;
		cout << "Input 2 numbers: ";
		cin >> num1 >> num2;
		cout << num1 << "^" << num2 << " = " << math_operators::power(result, num1, num2);
		break;
	}
	case 6:
	{
		cout << "|x|" << endl;
		cout << "Input 1 number: ";
		cin >> num1;
		cout << "|" << num1 << "| = " << math_operators::module(result, num1);
		break;
	}
	case 7:
	{
		cout << "x^1/2" << endl;
		cout << "Input 1 number: ";
		cin >> num1;
		cout << num1 << "^1/2 = " << math_operators::root(result);
		break;
	}
	default:
	{
		cout << "Sorry, but this version doesn't have any more options!";
	}
	}
}

int main()
{
	calculator();
	return 0;
}




