#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c; 

	if (a>b && a>c)
		cout << "The LARGEST of the three numbers is " << a;
	else if (b>a && b>c)
		cout << "The LARGEST of the three numbers is " << b;
	else if (c>a && c>b)
		cout << "The LARGEST of the three numbers is " << c;
	else
		cout << "There are no largest number ";

	_getch();
	return 0;

}