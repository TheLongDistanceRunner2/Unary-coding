#include <iostream>
#include <string>
using namespace std;

string decimalToUnary(int number);
int unaryToDecimal(string number);

int main()
{
	cout << "Enter decimal number to convert it to unary coding: " << endl;
	int input;
	cin >> input;

	string result;
	result = decimalToUnary(input);

	cout << "result: " << result << endl;

	cout << "==============================" << endl;
	cout << "Enter number in unary coding to convert it to decimal value: " << endl;
	string input2;
	cin >> input2;

	int result2;
	result2 = unaryToDecimal(input2);

	cout << "result: " << result2 << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}

string decimalToUnary(int number)
{
	int x = number - 1;

	string result = "";

	for (int i = 0; i < x; i++)
	{
		result.append("1");
	}
	result.append("0");

	return result;
}

int unaryToDecimal(string number)
{
	string str = number.substr(0, number.size() - 1);

	int onesNumber = str.length();

	return onesNumber + 1;
}
