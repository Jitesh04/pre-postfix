#include <iostream>
#include <cmath>
#include <string>

#include "calc.h"

using namespace std;


int main()
{
	calc a;
	calc b;
	calc c;

	cout << "Enter num 1: " << endl;
	cin >> a;

	cout << "Enter num 2: " << endl;
	cin >> b;

	c = a + b;

	cout << c << endl;

	++c;
	cout << "Prefix ++ overloading: " << c << endl;
	
	--c;
	cout << "Prefix -- overloading: " << c << endl;

	cout << endl;

	++c;
	cout << "Postfix ++ overloading: " << c << endl;

	c--;
	cout << "Postfix -- overloading: " << c << endl;
	return 0;
}