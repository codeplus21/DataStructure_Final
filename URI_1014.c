#include <stdio.h>

int main()
{
	float A, B;

	scanf("%f %f", &A, &B); // user input - De-clear float type variable

	printf("%.3f km/l\n", A / B);

	return 0;
}
