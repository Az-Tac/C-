
#include <iostream>
using namespace std;

int main()
{
	float a,i,average,sum,num;
	 sum = 0;
	cout << "Enter the number of elements : ";
	cin >> a;
	cout << "Enter " << a << " numbers " << endl;
	for (i = 0; i < a;i++) {
		 num;
		cout << "Enter number " << i + 1 << " : ";
		cin >> num;
		sum += num;
	}
	average = sum / a;
	cout << "Average : " << average << endl;
		
		return 0;
}

