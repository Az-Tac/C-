#include<iostream>
using namespace std;

int main() {
    char a[] = { "C++.++" };
    int length = strlen(a);
    int max = 0;
    int start = 0;

    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            bool flag = true;
            int length2 = j - i + 1;

            for (int k = 0; k < length2 / 2; k++) {
                if (a[i + k] != a[j - k]) {
                    flag = false;
                    break;
                }
            }

            if (flag && length2 > max) {
                max = length2;
                start = i;
            }
        }
    }

    if (max > 0) {
        for (int i = start; i < start + max; i++) {
            cout << a[i];
        }
    }

    cout << endl << max; 
    return 0;
}
