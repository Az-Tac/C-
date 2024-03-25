#include <iostream>
using namespace std;

int main()
{
    int num1, num2,operation;
    cout << "Enter two integers = ";
    cin >> num1 >> num2;
    cout << "Enter 1 for addition \n";
    cout << "Enter 2 for subtraction  \n";
    cout << "Enter 3 for multiplication \n";
    cout << "Enter 4 for division \n";
    cin >> operation;
    switch (operation) {
    case 1:
        cout << "Result = " << num1 + num2 << "\n";
        break;
    case 2:
        cout << "Result = " << num1 - num2 << "\n";
        break;
    case 3:
        cout << "Result = " << num1 * num2 << "\n";
        break;
    case 4:
        cout << "Result = " << num1 / num2 << "\n";
        break;
    }

}