#include <stdio.h>
/**
 * print_array - prints an array
 * @a: pointer to array
 * @n: number of times to print array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - i)
		{
			printf(", ");
		}
		printf("\n");
	}
}
