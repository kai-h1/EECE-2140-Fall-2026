/*
Kai Hong
Sep 18, 2026
User inputs an elapsed time in seconds, and the program outputs
the total seconds, minutes, hours, etc it contains.
*/
#include <iostream>
using namespace std;
//=======================
int main()
{
	cout << "Enter elapsed time: " << endl;

	int time;
	cin >> time;

	int seconds = time % 60;
	int minutes = time / 60 % 60;
	int hours = time / 60 / 60;

	cout << hours << " hours" << endl;
	cout << minutes << " minutes" << endl;
	cout << seconds << " seconds" << endl;

	return 0;
}
//=======================

// Recorded runs:
/*
-- 11045: 3*3600 + 4*60 + 5 = 11045
-- 59: 0*3600 + 0*60 + 59 = 59
-- 3600: 1*3600 + 0*60 + 0 = 3600
-- 86399: 23*3600 + 59*60 + 59 = 86399
*/