#include "myMath.h"


double Exponent(int x) // e^x
{
	return Power(E, x);
}
double Power(double x, int y) //x^y
{
	double sum=1;
	if (y >= 0)
	{
		for (int i = 0; i < y; i++)
		{
			sum *= x;
		}
		return sum;
	}
	else
	{
		for (int i = 0; i < (-y); i++)
		{
			sum *= x;
		}
		return 1/sum;
	}
}