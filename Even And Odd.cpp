#include<iostream>
using namespace std;

int main() {
    const int size = 10;
    int array[size];
    int array2[size];
    int array3[size];
    int even = 0, odd = 0;
    cout << "Enter 10 integers: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            array2[even++] = array[i];
        } else {
            array3[odd++] = array[i];
        }
    }
    cout << "\nEven Numbers = ";
    for (int i = 0; i < even; i++) {
        cout << array2[i] << " ";
    }
    cout << "\nOdd Numbers = ";
    for (int i = 0; i < odd; i++) {
        cout << array3[i] << " ";
    }
    return 0;
}
