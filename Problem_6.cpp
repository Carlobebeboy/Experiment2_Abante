#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	cout << " This will calculate the sum total of all whole numbers starting from 1." << endl;
	cout << " " << endl;

	int num, x, sum;
	bool userquit = false;

	do
	{
	cout << "Enter a number: "; cin >> num;
	
	if (num <= 0)
		userquit = true;
	else
	{
		sum = 0;
		for (x = 1; x <= num; x++)
		{
			sum = sum + x;
		}
		cout << "The sum of all whole numbers from 1 to " << num << " is " << sum << endl;

	}	
	} while (!userquit); cout << "Thank You!" << endl;

	
	_getch();
	return 0;
}


