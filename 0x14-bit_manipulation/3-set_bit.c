#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - sets a value of a bit
 * @n: bit values
 * @index: index of the bit
 *
 * Return: 1 if success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1UL << index);
	return (1);
}
