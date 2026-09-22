#include <iostream>
#include <string>

using namespace std;
//=======================
int stringToInt(string s)
{
	int length = s.length();
	int result = 0;
	for (int i = 0; i < length; i++)
	{
		int digit = static_cast<int>(s[i]) - static_cast<int>('0');
		int place = length - i;

		result += digit * place;
	}

	return result;
}

int main()
{
	cout << "Please enter two numbers: " << endl;
	float num1, num2;
	cout << stringToInt("9") << endl;

	cin >> num1 >> num2;

	cout << "Sum of " << num1 << " and " << num2
		 << " equals " << num1 + num2 << "!" << endl;
	return 0;
}
//=======================