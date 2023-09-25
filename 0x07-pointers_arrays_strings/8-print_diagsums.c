#include <stdio.h>
/**
 * print_diagsums - square of diagonals
 * @a: array col
 * @size: array row
 * return: 0 after success
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d\n, %d\n", sum1, sum2);
}
