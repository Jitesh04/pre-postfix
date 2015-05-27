//function definitions

#include "calc.h"

calc::calc()
{

}

calc::calc(int a)
{
	num = a;
}

calc::~calc()
{

}

calc calc::operator+(calc aco)
{
	calc brandNew;
	brandNew.num = num + aco.num;
	return(brandNew);
}

ostream& operator<<(ostream& os, const calc& frac) {
	os << frac.num;
	return os;
}

istream& operator>>(istream& is, calc& frac)
{
	is >> frac.num;
	return is;
}

void calc::operator++()				//prefix ++ overloading definition
{
	num += 1;
}

calc operator--(calc &n)			//prefix -- overloading definition
{
	n.num -= 1;
	return n;
}

calc calc::operator++(int)
{
	calc duplicate(*this);
	num += 1;
	return duplicate;
}

calc operator--(calc &n, int)
{
	calc duplicate(n);
	n.num -= 1;
	return duplicate;
}
