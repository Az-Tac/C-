#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    const int size = 1000;
    char arr[size];
    cout << "Enter Sentence :: ";
    cin.getline(arr, size); 

    if (arr[0] >= 'a' && arr[0] <= 'z')
            arr[0] = (char)(arr[0] - 32); 

    for (int i = 0; arr[i] != '\0'; i++) 
    {
        if (arr[i] == ' ')
        {
            if (arr[i + 1] >= 'a' && arr[i + 1] <= 'z') 
            {
                arr[i + 1] = (char)(arr[i + 1] - 32); 
            }
        }
    }

    cout << endl << arr;

    return 0;
}
