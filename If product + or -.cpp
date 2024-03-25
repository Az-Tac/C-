

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter number 1 : ";
    cin >> a;
    cout << "Enter number 2 : ";
    cin >> b;
    c = a * b;
    if (c > 0)
        cout << c << " is Positive ";
    else
        cout << c << " is Negative ";
    return 0;

}
