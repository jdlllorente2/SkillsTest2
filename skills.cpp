#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int count,n;

	cout << "Enter a number: ";
	cin >> n;
	cout << "Multiplication Table of " << n << "\n";

	for(count=1;count<=10;count++)
	{
		cout << count << " x " << n << " = " << count*n << "\n";
		if (count==10) break;
	}
	_getch();
	return 0;
}

