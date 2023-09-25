#include <stdio.h>
/**
 * _strspn - counts number of bytes in s
 * @s: bytes to be cheked
 * @accept: where to start counting
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int to_match;

	while (*s != '\0')
	{
		to_match = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				to_match = 1;
				break;
			}
			accept++;
		}
		if (to_match == 0)
		{
			return (i);
		}
		i++;
		s++;
	}
	return (i);
}
