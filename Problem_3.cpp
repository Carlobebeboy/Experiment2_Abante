#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int x, y;
	double z = 2.5;
	
	cout << "Enter first number (x): "; cin >> x;
	cout << "Enter second numbery (y): "; cin >> y;
	cout << "Let z = " << z << endl;


	switch (x)
	{
	case 1:
		if (1<y<5)
			cout << setw(10) << fixed << setprecision(2)<< "V= " << x*y*z << endl;
		else if (y >= 5)
			cout << setw(10) << fixed << setprecision(2)<< "V= " << x + (y/z) << endl;
		break;

	case 2:
		if (y<=5)
			cout << setw(10) << fixed << setprecision(2)<< "V= " << abs((x-y)/z) << endl;
		else if (y>5)
			cout << setw(10) << fixed << setprecision(2)<< "V= " << x - (sqrt(y+z)) << endl;
		break;

	default:
		cout << setw(10) << fixed << setprecision(2)<< "V= " << x + y +z << endl;

	
	}
	
	_getch();
	return 0;
}