#include <iostream>
using namespace std;

int main()
{
    const int size = 12;
    int array[size];
    cout << "Enter " << size << " Integers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int min = array[0];
    int min2 = array[1];
    int index = 0; 
    int index2 = 1;


    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min2 = min;
            min = array[i];
            index2 = index;
            index = i;
        }
        else if (array[i] < min2 && array[i] != min) 
        {
            min2 = array[i];
            index2 = i;
        }
    }

    cout << "Min: " << min << endl;
    cout << "Min2: " << min2 << endl;
    cout << "Index: " << index << endl;
    cout << "Index2: " << index2 << endl;

    return 0;
}
