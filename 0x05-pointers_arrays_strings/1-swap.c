#include <stdio.h>
/**
 * swap_int - swaps the integers of a and b
 * @a: first integer
 * @b: second integer
 * return: always 0;
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
