#include "myMath.h"

void main()
{
	double number =0;
	printf("Please insert a number: ");
	scanf("%lf", &number);

	printf("The value of f(x) = e^x + x^3 - 2 at the point %.4lf is: %.4lf \n", number, sub(add(Exponent(number), Power(number, 3)), 2));
	printf("The value of f(x) = 3x + 2x^2 at the point %.4lf is: %.4lf \n", number, add(mul(number,3),mul(Power(number,2),2)));
	printf("The value of f(x) = ((4x)^3)/5 - 2x at the point %.4lf is: %.4lf \n", number, sub(div(Power(mul(number,4),3),5),mul(number,2)));
}