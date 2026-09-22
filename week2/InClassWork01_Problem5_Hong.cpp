/*
Kai Hong
Sep 18, 2026
User enters a value in cents, and program calculates fewest coins it can use with it
*/
#include <iostream>
using namespace std;
//======================
int main()
{
	cout << "Enter amount in cents: ";
	int cents;
	cin >> cents;

	int change = cents;
	int quarters = change / 25;
	change = change - quarters * 25;

	int dimes = change / 10;
	change = change - dimes * 10;

	int nickels = change / 5;
	change = change - nickels * 5;

	int pennies = change;

	cout << cents << " = "
		 << quarters << " quarters, "
		 << dimes << " dimes, "
		 << nickels << " nickels, "
		 << pennies << " pennies" << endl;

	return 0;
}
//======================