#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	cout << "Fibonacci series:" << endl;
	cout << " " << endl;
	
	int num;
	int first = 0;
	int second = 1;
	int next;
	
	for (num=1;num<=20;num++)
	{
		if (num <=1)
			next = num;
		else
		{
			next = first + second;
			first = second;
			second = next;

		}

		cout << next << ","; 
	}

	cout << "10964";


	



	_getch();
	return 0;
}
	
		
