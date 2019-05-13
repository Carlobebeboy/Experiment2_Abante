#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int ga, bl;
	
	cout << "WATER BILL" << endl;
	cout << " " << endl;


	cout << "Gallons used: "; cin >> ga;
	cout << "Unpaid balance (P20 for late charge): P"; cin >> bl;
	cout << "Consumption charge: P" << 1.10 * ga << endl;
	cout << "Water demand charge: P35" << endl;

	cout << "  " << endl;

	if (bl > 0)
		cout << "Water bill: P" << 35 + 20 + (1.10 *ga) + bl;
	else
		cout << "Water bill: P" << 35 + bl + (1.10 * ga);

	
	_getch();
	return 0;

}
