#include "polynomialArray.h"
#include <iostream>
#include <math.h>

using namespace std;

polynomial::polynomial()				// Non Parameterized Constructor
{
	size = 0;
}

polynomial::~polynomial()				// Destructor
{
}

polynomial::polynomial(int xMax)		// Parameterized Constructor
{
	p = new double[xMax];
	B = new double[xMax+1];
	size = 0;
	Max = xMax;
}

void polynomial::input()
{
	cout << "Enter the Degree : ";
		cin >> degree;
		for (int i = degree; i >= 0; i--)
		{
			cout << "Enter the Coefficient of x^:" << i << " # ";
			cin >> p[i];
			size++;
		}
}

void polynomial::display()
{ 
	j = degree;
	int i = degree;
	cout << "\n\n";
	cout << p[i] << ch << "^" << j;
	j = j - 1;
	for (i = degree-1; i >=0; i--)
	{
		if (p[i] > 0)
		{
			cout <<"+"<<p[i] << ch << "^" << j;
			j--;
		}
		else
		{
			cout << p[i] << ch << "^" << j;
			j--;
		}
	}
}

void polynomial::evaluation(int c)
{
	int ans = 0;
	int k = degree;
	for (int i = degree; i >= 0; i--)
	{
		ans += (p[i] * pow(c, k));
		k--;
	}

	cout << "\n\nAnswer After Evaluation is : " << ans;
}

void polynomial::integral()
{
	int cp = 0;
	B[0] = 0;
	for (int i = 1; i < size+1 ; i++)
	{
		B[i] = p[i - 1] / i;
	}
	cout << "\n\nIntegral is : " ;
	for (int j = size; j >= 0; j--)
	{
		cout<<B[j]<<" , ";
	}
}
