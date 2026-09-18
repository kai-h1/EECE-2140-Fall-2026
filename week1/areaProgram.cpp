#include <iostream>

using namespace std;

int main()
{
	cout << "Program to compute and output the perimeter and "
		 << "area of a rectangle.\n"
		 << endl;

	// Ask for the length and width of the rectangle
	double length;
	double width;

	cout << "Enter length: " << endl;
	cin >> length;

	cout << "Enter width: " << endl;
	cin >> width;

	double perimeter = 2 * length + 2 * width;
	double area = length * width;

	cout << "---------------" << endl;
	cout << "Length    = " << length << endl;
	cout << "Width     = " << width << endl;
	cout << "Area      = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;

	return 0;
}