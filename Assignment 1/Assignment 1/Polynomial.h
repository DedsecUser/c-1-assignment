#ifndef __POLYNOMIAL_H
#define __POLYNOMIAL_H

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <string.h> 

#include <iostream>
#include <iomanip>
using namespace std;

static int maxCoefficient = 0;


class Polynomial {

	friend void getMaxDegree();
public:
	Polynomial();
	~Polynomial();
	void print();



private:
	int size;
	int  coefficient;
	double *indeterminate;

};


#endif // !__POLYNOMIAL_H
