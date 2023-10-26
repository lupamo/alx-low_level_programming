#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - sets value 0 to a bit
 * @n: the bit value
 * @index: the value index to be removed
 *
 * Return: 1 if successful or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
