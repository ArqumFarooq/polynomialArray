#pragma once
class polynomialArray
{
public: double *p,*B;
		int size, Max ;
		int degree = 0 , j = 0 , constant = 0;
		char ch = 'x';
		char sign;

public:

	polynomial();				// Non Parameterized Constructor
	~polynomial();				// Destructor
	polynomial(int xMax);		// Parameterized Constructor
	void input();				// Input th Polynomial
	void display();				// Displaying the Array
	void evaluation(int con);	// Evaluation Of The Expression
	void integral();			// Finding Integral

};
