#include <stdio.h>


int main()
{
	int dis;

	scanf("%d", &dis);

	int time = dis/((90 / 60.0) - (60 / 60.0));

	printf("%d minutos\n", time);

	return 0;
}
