#include <stdio.h>

    int main()
{
	int A;
	int B;
	float C;

	scanf("%d", &A); // user input
	scanf("%d", &B); // user input
	scanf("%f", &C); // user input

	printf("NUMBER = %d\n", A);
	printf("SALARY = U$ %.2f\n", B * C);

    return 0;
}
