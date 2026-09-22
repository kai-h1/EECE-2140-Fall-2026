/*
Kai Hong
Sep 18, 2026
Asks the user for two numbers to calculate the area and perimeter of a rectangle
*/
#include <iostream>
using namespace std;
//========================
int main()
{
	double length;
	double width;

	// currently, this program accepts negative numbers. Instead it should reject it (negative area
	// doesn't make sense). And instead (as one idea), it could reprompt for a "valid" input (a
	// positive number).
	cout << "Enter the length: ";
	cin >> length;

	cout << "Enter the width: ";
	cin >> width;

	double area = length * width;
	double perimeter = 2 * (length + width);

	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;

	return 0;
}
//========================