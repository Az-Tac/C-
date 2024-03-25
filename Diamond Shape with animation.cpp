#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int n = 5, i, j;
    for (i = 1; i < n; i++) {
        for (j = i; j <= n; j++) {
            cout << "  ";
        }
        for (j = 1; j < i; j++) {
            cout << "* ";
            Sleep(300);
        }
        for (j = 1; j <= i; j++) {
            cout << "* ";
            Sleep(300);
        }
        cout << "\n";
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << "  ";
        }
        for (j = i; j < n; j++) {
            cout << "* ";
            Sleep(300);
        }
        for (j = i; j <= n; j++) {
            cout << "* ";
            Sleep(300);
        }
        cout << "\n";
    }


}