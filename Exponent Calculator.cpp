#include<iostream>
using namespace std;
int main()
{
	int base, exponent, result = 1;
	cout << "Enter Base : ";
	cin >> base;
	cout << "Enter Exponent : ";
	cin >> exponent;
	for (int n = 0; n < exponent; n++) 
	{
		result *= base;
	}
	cout << base << " Raise to power " << exponent << " = " << result << endl;
}