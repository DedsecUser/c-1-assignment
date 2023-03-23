#include "Polynomial.h"


void getMaxDegree()
{
	cout << maxCoefficient;
}

Polynomial::Polynomial()
{
	size = 1;
	coefficient = 0;
	indeterminate = new double[size];
	indeterminate[0] = 0;
}

Polynomial::~Polynomial()
{
	delete[]indeterminate;
}

void Polynomial::print()
{
	for (int i = 0; i < size; i++)
	{
		if(i==0)
		{ 
			cout << indeterminate[i] << "+";
		}
		else
		{
			cout << indeterminate[i] << "^"<<i<<"+";
		}
	}
}