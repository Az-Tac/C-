

#include <iostream>
using namespace std;

int main()
{
    int n=5,i,j;
    for (i = 1; i < n; i++) {
        for (j = i; j <= n; j++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << " ";
        }
        for (j = i; j <= n; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    
    
}

