#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int count;

	cout << "Counting..." << endl;
	
	for (count=1;count<=10;count++)
	
		cout << count << ",";
		
	for (count>10;count<30;count++)
	{
		if ( count % 2 == 0)
		{
			cout << count << ",";
		}

	}

	cout << "30";


	
	_getch();
	return 0;
}