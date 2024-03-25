#include <iostream>
using namespace std;

int main() {
    const int size = 8;
    int arr[size];

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Initialize variables for the highest, and second lowest numbers
    int highest = arr[0];
    int secondLowest = arr[0];

    // Find the highest and second lowest numbers
    for (int i = 1; i < size; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
        else if (arr[i] < secondLowest) {
            secondLowest = arr[i+1];
        }
    }

    // Display the results
    cout << "Highest Number: " << highest << endl;
    cout << "Second Lowest Number: " << secondLowest << endl;

    return 0;
}


