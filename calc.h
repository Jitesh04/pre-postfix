//function declarations

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

#ifndef CALC_H
#define CALC_H

class calc
{
public:

	calc(); //default

	calc(int); //overloaded

	~calc(); //destructor

	//accessor - get, data type, const;

	//mutator - set, void (data type)
	
	
	void operator++();					//prefix ++ overloading
	friend calc operator--(calc&);		//friend prefix -- overloading

	//operator overloading
	calc operator+(calc);

	

	friend ostream& operator<<(ostream& os, const calc& frac);		//insertion
	friend istream& operator>>(istream& is, calc& frac);			//extraction

	calc operator++(int);				 //int used for postfix
	friend calc operator--(calc&, int);
private:
	//variables
	int num;
};


#endif