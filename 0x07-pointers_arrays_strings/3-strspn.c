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

	while (s[i] != '\0')
	{
		int checked = 0;

		for (unsigned int k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				checked = 1;
				break;
			}
		}
		if (!checked)
		{
			break;
		}
		i++;
	}
	return (i);
}
