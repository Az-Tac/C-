#include <iostream>
using namespace std;

int main()
{
	int weeks=3, days_in_weeks=7;
	for (int i = 1; i <= weeks; i++) 
	{
		cout << "Week : " << i << endl;
		for (int j = 1; j <= days_in_weeks; j++) 
		{
			cout << "Day : " << j << endl;
		}
		cout<<"\n";
	}
	return 0;
}
