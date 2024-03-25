#include <iostream>
using namespace std;



int main()
{
	int Auth = 0, TotalSales = 0, employ;
	const int num_employ = 2;
	int totalsale[num_employ] = {};

	//Authenticate
	cout << "\t\t UCP CAFE management system " << endl;
	cout << "\t\t\t Login Page " << endl << endl;
	cout << "\t\t Employee PassCode :: ";

	cin >> employ;
	if (employ == 431)
		Auth = 1;
	else if (employ == 532)
		Auth = 2;
	else
		Auth = 0;

	//Outside Authenticate
	int temp = Auth;
	//Main System
	while (Auth)
	{
		//Menue
		system("cls");
		cout << "\t\t UCP CAFE management system" << endl;
		cout << "\t\t     Active Employee :: " << Auth << endl << endl << endl;
		cout << "Instructions      \n    ==>>  Only Two Item Per Student Allowed " << endl << endl << endl;


		cout << "\t   Menu " << endl;
		for (int i = 0; i < 30; i++)
			cout << "_";
		cout << endl << "|Serial|  Name         |Price|";
		cout << endl << "|No.   |               |     |";
		cout << endl << "|Item  |               |     |";
		cout << endl << "|1     |  Tea          |30   |";
		cout << endl << "|2     |  Small Pizza  |40   |";
		cout << endl << "|3     |  Shoarma      |40   |";
		cout << endl << "|4     |  Pastry       |40   |";
		cout << endl << "|5     |  Samosa       |10   |";
		cout << endl << "|6     |  Green Salad  |30   |";
		cout << endl << "|7     |  Sandwich     |70   |";
		cout << endl << "|8     |  Burger       |100  |";
		cout << endl << "|9     |  Fries        |100  |";
		cout << endl << "|10    |  Coffee       |50   |" << endl;
		for (int i = 0; i < 30; i++)
			cout << "_";

		//Cart
		int Selection, Sum = 0;
		cout << endl;

		for (int i = 0; i < 2; i++)
		{
			cout << "Enter Item " << i + 1 << " Serial No :: ";
			cin >> Selection;
			switch (Selection)
			{
			case 0:cout << "  ==>> No Selection <<==" << endl; break;
			case 1:Sum += 30; break;
			case 2:Sum += 40; break;
			case 3:Sum += 40; break;
			case 4:Sum += 40; break;
			case 5:Sum += 10; break;
			case 6:Sum += 30; break;
			case 7:Sum += 70; break;
			case 8:Sum += 100; break;
			case 9:Sum += 100; break;
			case 10:Sum += 50; break;
			default: cout << "  ==>> Invalid Entry <<==" << endl;
			}
		}
		if (Sum > 0)
			totalsale[Auth-1]++;
		for (int i = 0; i < 30; i++)
			cout << "_";
		cout << endl << "Total Payment \t       :: " << Sum << endl;
		for (int i = 0; i < 30; i++)
			cout << "_";
		//EmpSwitch
		int test;
		cout << endl << endl << "Instructions       \n    ==>> 0 = End Program \n    ==>> 1 = Continue \n    ==>> 2 = Switch User" << endl << endl;
		cout << "Selection \t       :: ";
		cin >> test;


		if (test == 0)
			Auth = 0;
		else if (test == 2)
		{
			//TotalTransactions
			system("cls");
			for (int i = 0; i < num_employ; i++) {
				cout << "Total Sale for Employ " << i + 1 << " " << "   ==>>  " << totalsale[i] << endl;
			}
			system("pause");

			//Authenticate
			system("cls");
			cout << "\t\t Enter Correct Emplyee ID To Login" << endl;
			cout << "\t\t Employee ID ::";
			cin >> employ;
			if (employ == 431)
				Auth = 1;
			else if (employ == 532)
				Auth = 2;
			else
				Auth = 0;
		}

		if (temp != Auth)
		{
			temp = Auth;
		}

	}

	system("pause");
	return 0;
}