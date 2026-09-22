/*
Kai Hong
Sep 18, 2026
Using variables to output different calculations
*/
#include <iostream>
using namespace std;
//========================
int main()
{
	int number1 = 15.0;
	int number2 = 2.0;

	int sum = number1 + number2;
	int difference = number1 - number2;
	int product = number1 * number2;
	int quotient = number1 / number2;

	cout << number1 << " + " << number2 << " = " << sum << endl;
	cout << number1 << " - " << number2 << " = " << difference << endl;
	cout << number1 << " * " << number2 << " = " << product << endl;
	cout << number1 << " / " << number2 << " = " << quotient << endl;

	return 0;
}
//========================