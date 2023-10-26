#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - convertes binary to interger
 * @b: points to 0 and 1 chars
 *
 * Return: an integer converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			count = (count << 1);
		}
		else if (b[i] == '1')
		{
			count = (count << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (count);
}
