#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - checks a bit from a given index
 * @n: numbere to be looked at
 * @index: index where it should look at n
 *
 * Return: index value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
