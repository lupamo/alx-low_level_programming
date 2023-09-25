#include <stdio.h>
/**
 * print_diagsums - square of diagonals
 * @a: array col
 * @size: array row
 * return: 0 after success
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum1 += a[i * size + 1];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
