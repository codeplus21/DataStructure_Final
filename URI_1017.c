#include <stdio.h>

int main()
{
	double a, b, r;

	scanf("%lf %lf", &a, &b); //user input

	r = (a * b)/12; //calculation

	printf("%.3lf\n", r);
	return 0;
}
