include "polynomialArray.h"
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	polynomial p(20);

	p.input();
	p.display();
	p.evaluation(3);
	p.integral();

	_getch();
	return 0;
}
