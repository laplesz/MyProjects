#include <iostream>
#include <cmath>

using namespace std;

int choose_operation, int_result, int_num1, int_num2;
double double_result, double_num1, double_num2, check_num1, check_num2;

namespace math_operators // не міняти, рване
{
	int sum(int int_num1, int int_num2);
	double sum(double double_num1, double double_num2);
	double sum(int int_num1, double double_num2);
	double sum(double double_num1, int int_num2);

	int substruct(int int_num1, int int_num2);
	double substruct(double double_num1, double double_num2);
	double substruct(int int_num1, double double_num2);
	double substruct(double double_num1, int int_num2);

	int multiply(int int_num1, int int_num2);
	double multiply(double double_num1, double double_num2);
	double multiply(int int_num1, double double_num2);
	double multiply(double double_num1, int int_num2);

	int divide(int int_num1, int int_num2);
	double divide(double double_num1, double double_num2);
	double divide(int int_num1, double double_num2);
	double divide(double double_num1, int int_num2);

	int power(int int_num1, int int_num2);
	double power(double double_num1, double double_num2);

	int module(int int_result, int int_num1);
	double module(double double_result, double double_num1);

	double root(int int_num1); // пішов проти системи
	double root(double double_num1);
}

int math_operators::sum(int int_num1, int int_num2) { return int_num1 + int_num2; } // не міняти, рване
double math_operators::sum(double double_num1, double double_num2) { return double_num1 + double_num2; }
double math_operators::sum(int int_num1, double double_num2) { return int_num1 + double_num2; }
double math_operators::sum(double double_num1, int int_num2) { return double_num1 + int_num2; }

int math_operators::substruct(int int_num1, int int_num2) { return int_num1 - int_num2; }
double math_operators::substruct(double double_num1, double double_num2) { return double_num1 - double_num2; }
double math_operators::substruct(int int_num1, double double_num2) { return int_num1 - double_num2; }
double math_operators::substruct(double double_num1, int int_num2) { return double_num1 - int_num2; }

int math_operators::multiply(int int_num1, int int_num2) { return int_num1 * int_num2; }
double math_operators::multiply(double double_num1, double double_num2) { return double_num1 * double_num2; }
double math_operators::multiply(int int_num1, double double_num2) { return int_num1 * double_num2; }
double math_operators::multiply(double double_num1, int int_num2) { return double_num1 * int_num2; }

int math_operators::divide(int int_num1, int int_num2) { return int_num1 / int_num2; }
double math_operators::divide(double double_num1, double double_num2) { return double_num1 / double_num2; }
double math_operators::divide(int int_num1, double double_num2) { return int_num1 / double_num2; }
double math_operators::divide(double double_num1, int int_num2) { return double_num1 / int_num2; }

int math_operators::power(int int_num1, int int_num2) {
	int int_result = 1;
	for (int i = 0; i < int_num2; i++)
	{
		int_result *= int_num1;
	}
	return int_result;
}
double math_operators::power(double double_num1, double double_num2) {
	double double_result = 1;
	for (int i = 0; i < double_num2; i++)
	{
		double_result *= double_num1;
	}
	return double_result;
}

int math_operators::module(int int_result, int int_num1) { return int_result < 0 ? -1 * int_num1 : int_num1; }
double math_operators::module(double double_result, double double_num1) { return double_result < 0 ? -1 * double_num1 : double_num1; }

double math_operators::root(int int_num1) { return sqrt(int_num1); }
double math_operators::root(double double_num1) { return sqrt(double_num1); }

void calculator()
{
	cout << "-----------CALCULATOR-----------" << endl;
	cout << "1: +" << endl;
	cout << "2: -" << endl;
	cout << "3: *" << endl;
	cout << "4: /" << endl;
	cout << "5: ^y" << endl;
	cout << "6: |x|" << endl;
	cout << "7: x^1/2" << endl;
	cout << "Enter a number to choose operation: ";
	cin >> choose_operation;

	switch (choose_operation)
	{
	case 1:
	{
		cout << "x + y" << endl;
		cout << "Input 2 numbers: ";
		cin >> check_num1 >> check_num2;
		int_num1 = check_num1;
		int_num2 = check_num2;
		if (check_num1 == int_num1 && check_num2 == int_num2)
		{
			cout << int_num1 << " + " << int_num2 << " = " << math_operators::sum(int_num1, int_num2);
		}
		else if (check_num1 == int_num1 && check_num2 != int_num2)
		{
			double_num2 = check_num2;
			cout << int_num1 << " + " << double_num2 << " = " << math_operators::sum(int_num1, double_num2);
		}
		else if (check_num1 != int_num1 && check_num2 == int_num2)
		{
			double_num1 = check_num1;
			cout << double_num1 << " + " << int_num2 << " = " << math_operators::sum(double_num1, int_num2);
		}
		else if (check_num1 != int_num1 && check_num2 != int_num2)
		{
			double_num1 = check_num1;
			double_num2 = check_num2;
			cout << double_num1 << " + " << double_num2 << " = " << math_operators::sum(double_num1, double_num2);
		}
		else
		{
			cout << "For now this version doesn't have this option";
		}
		break;
	}
	case 2:
	{
		cout << "x - y" << endl;
		cout << "Input 2 numbers: ";
		cin >> check_num1 >> check_num2;
		int_num1 = check_num1;
		int_num2 = check_num2;
		if (check_num1 == int_num1 && check_num2 == int_num2)
		{
			cout << int_num1 << " - " << int_num2 << " = " << math_operators::substruct(int_num1, int_num2);
		}
		else if (check_num1 == int_num1 && check_num2 != int_num2)
		{
			double_num2 = check_num2;
			cout << int_num1 << " - " << double_num2 << " = " << math_operators::substruct(int_num1, double_num2);
		}
		else if (check_num1 != int_num1 && check_num2 == int_num2)
		{
			double_num1 = check_num1;
			cout << double_num1 << " - " << int_num2 << " = " << math_operators::substruct(double_num1, int_num2);
		}
		else if (check_num1 != int_num1 && check_num2 != int_num2)
		{
			double_num1 = check_num1;
			double_num2 = check_num2;
			cout << double_num1 << " - " << double_num2 << " = " << math_operators::substruct(double_num1, double_num2);
		}
		else
		{
			cout << "For now this version doesn't have this option";
		}
		break;
	}
	case 3:
	{
		cout << "x * y" << endl;
		cout << "Input 2 numbers: ";
		cin >> check_num1 >> check_num2;
		int_num1 = check_num1;
		int_num2 = check_num2;
		if (check_num1 == int_num1 && check_num2 == int_num2)
		{
			cout << int_num1 << " * " << int_num2 << " = " << math_operators::multiply(int_num1, int_num2);
		}
		else if (check_num1 == int_num1 && check_num2 != int_num2)
		{
			double_num2 = check_num2;
			cout << int_num1 << " * " << double_num2 << " = " << math_operators::multiply(int_num1, double_num2);
		}
		else if (check_num1 != int_num1 && check_num2 == int_num2)
		{
			double_num1 = check_num1;
			cout << double_num1 << " * " << int_num2 << " = " << math_operators::multiply(double_num1, int_num2);
		}
		else if (check_num1 != int_num1 && check_num2 != int_num2)
		{
			double_num1 = check_num1;
			double_num2 = check_num2;
			cout << double_num1 << " * " << double_num2 << " = " << math_operators::multiply(double_num1, double_num2);
		}
		else
		{
			cout << "For now this version doesn't have this option";
		}
		break;
	}
	case 4:
	{
		cout << "x / y" << endl;
		cout << "Input 2 numbers: ";
		cin >> check_num1 >> check_num2;
		int_num1 = check_num1;
		int_num2 = check_num2;
		if (check_num1 == int_num1 && check_num2 == int_num2)
		{
			cout << int_num1 << " / " << int_num2 << " = " << math_operators::divide(int_num1, int_num2);
		}
		else if (check_num1 == int_num1 && check_num2 != int_num2)
		{
			double_num2 = check_num2;
			cout << int_num1 << " / " << double_num2 << " = " << math_operators::divide(int_num1, double_num2);
		}
		else if (check_num1 != int_num1 && check_num2 == int_num2)
		{
			double_num1 = check_num1;
			cout << double_num1 << " / " << int_num2 << " = " << math_operators::divide(double_num1, int_num2);
		}
		else if (check_num1 != int_num1 && check_num2 != int_num2)
		{
			double_num1 = check_num1;
			double_num2 = check_num2;
			cout << double_num1 << " / " << double_num2 << " = " << math_operators::divide(double_num1, double_num2);
		}
		else
		{
			cout << "For now this version doesn't have this option";
		}
		break;
	}
	case 5: // з цим все ще якась лажа; спосіб Стьопи може і працює, але не було враховано головного фактору - я не настільки розумний
	{       // я вирішив не робити більше умов як у попередніх суто через цю помилку
		cout << "x^y" << endl;
		cout << "This version cannot calculate operations with 'double' values correctly. Use it at your own risk." << endl;
		cout << "Input 2 numbers: ";
		cin >> check_num1 >> check_num2;
		int_num1 = check_num1;
		int_num2 = check_num2;
		if (check_num1 == int_num1 && check_num2 == int_num2)
		{
			cout << int_num1 << "^" << int_num2 << " = " << math_operators::power(int_num1, int_num2);
		}
		else if (check_num1 != int_num1 && check_num2 != int_num2)
		{
			double_num1 = check_num1;
			double_num2 = check_num2;
			cout << double_num1 << "^" << double_num2 << " = " << math_operators::power(double_num1, double_num2);
		}
		else
		{
			cout << "For now this version doesn't have this option";
		}
		break;
	}
	case 6:
	{
		cout << "|x|" << endl;
		cout << "Input 1 number: ";
		cin >> check_num1;
		int_num1 = check_num1;
		if (check_num1 == int_num1)
		{
			cout << "| " << int_num1 << " | = " << math_operators::module(int_result, int_num1);
		}
		else if (check_num1 != int_num1)
		{
			double_num1 = check_num1;
			cout << "|" << double_num1 << "| = " << math_operators::module(double_result, double_num1);
		}
		else
		{
			cout << "For now this version doesn't have this option";
		}
		break;
	}
	case 7:
	{
		cout << "x^1/2" << endl;
		cout << "Input 1 number: ";
		cin >> check_num1;
		int_num1 = check_num1;
		if (check_num1 == int_num1)
		{
			cout << int_num1 << "^1/2 = " << math_operators::root(int_num1);
		}
		else if (check_num1 != int_num1)
		{
			double_num1 = check_num1;
			cout << double_num1 << "^1/2 = " << math_operators::root(double_num1);
		}
		else
		{
			cout << "For now this version doesn't have this option";
		}
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
