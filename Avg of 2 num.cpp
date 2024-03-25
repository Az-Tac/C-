// Avg of 2 num.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float a, b, Avg,Sum;
	cout << "Enter number 1 : ";
	cin >> a;
	cout << "Enter number 2 : ";
	cin >> b;
	Sum = a + b;
	Avg = Sum / 2;
	cout << "Average : " << Avg << endl;
	return 0;

}

