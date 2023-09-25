#include <stdio.h>
/**
 * _memset - fills memory to another
 * @s: points a variable
 * @b: used as a filler
 * @n: number of times to fill
 * Return: s after success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
