#include <iostream>
#include <string>

using namespace std;

float getNumber()
{
	float number;

	cout << "	Enter a number: " << endl;
	cin >> number;

	return number;
}

void startCalculator()
{
	cout << "Welcome to the calculator (enter 'q' to quit)" << endl;

	bool isRunning = true;
	while (isRunning)
	{
		cout << "Enter a number for an operator (q to quit): " << endl;
		cout << "	1. +" << endl;
		cout << "	2. x" << endl;
		cout << "	3. /" << endl;

		char input;
		int option;
		cin >> input;

		if (input == 'q')
		{
			isRunning = false;
			return;
		}
		else
		{
			if (input == '1')
			{
				option = 1;
			}
			else if (input == '2')
			{
				option = 2;
			}
			else if (input == '3')
			{
				option = 3;
			}
		}

		if (option >= 1 && option <= 3)
		{
			float num1 = getNumber();
			float num2 = getNumber();
			float result;

			if (option == 1)
			{
				// Addition
				result = num1 + num2;
			}
			else if (option == 2)
			{
				// Multiplication
				result = num1 * num2;
			}
			else if (option == 3)
			{
				result = num1 / num2;
			}

			cout.precision(3);
			cout << "\nCalculed (precision of 3): " << result << endl;
			cout << "----------------" << endl;
		}
	}

	return;
}

int main()
{
	int integer = 1;		  // 1, 2, 3, 4, ...
	long longNumber = 999999; // a looong integer

	float floatNum = 3.14;		  // decimal numbers
	double bigFloatNum = 3.14159; // longer decimal numbers

	char character = 'A'; // single characters
	string letters = "a bunch of characters";

	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "-----------------------------------\n"
		 << endl;

	startCalculator();

	return 0;
}