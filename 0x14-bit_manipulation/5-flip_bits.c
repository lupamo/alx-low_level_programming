#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - changes 1 and 0 to get to another
 * @n: binary to be changed
 * @m: binary to change to
 * Return: the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	num = 0;
	while (n != m)
	{
		if ((n ^ m) & 1)
		{
			num++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (num);
}
