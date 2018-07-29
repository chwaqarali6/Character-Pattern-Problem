#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	//Initializing Variables
	int count = 0;
	char input;

	//Loop To Count Number Of Time Values Entered
	while (count<50)
	{
		cout << "Please Enter A Single Value:- ";
		cin >> input;

		//Condition To Check For Pattern
		if (input == 'a')
		{
			cout << "Please Enter A Single Value:- ";
			cin >> input;
			if (input == 'b')
			{
				cout << "Please Enter A Single Value:- ";
				cin >> input;
				if (input == 'c')
				{
					cout << "Pattern Found";
					break;
				}
			}
		}

		//Codition To Show That Pattern Not Find After 50 Inputs
		if (count == 50)
		{
			cout << "Pattern Not Found";
		}

		count++;

	}

	_getch();

}