#include <stdio.h>
/**
 * reverse_array - recerses an array
 * @a: array to bee reversed
 * @n: number of elements in array
 * Return: returns reversed array
 */
void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;

	while (first < last)
	{
		int start = a[first];

		a[first] = a[last];
		a[last] = start;
		first++;
		last--;
	}
}
