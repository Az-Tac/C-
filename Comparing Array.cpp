#include<iostream>
using namespace std;

int main() {
    const int size = 12;
    int array[size];
    int array2[size];
    int greater = 0, greater2 = 0, equal = 0;

    cout << "Enter 12 Integers for the first array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Enter 12 Integers for the second array: ";
    for (int i = 0; i < size; i++) {
        cin >> array2[i];
    }

    for (int i = 0; i < size; i++) {
        if (array[i] > array2[i]) {
            greater++;
        } else if (array2[i] > array[i]) {
            greater2++;
        } else {
            equal++;
        }
    }

    cout << "First Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\nSecond Array: ";
    for (int i = 0; i < size; i++) {
        cout << array2[i] << " ";
    }
    cout << "\nWinners in First Array: " << greater << endl;
    cout << "Winners in Second Array: " << greater2 << endl;
    cout << "Same Elements in Both Arrays: " << equal << endl;

    return 0;
}
