#include <stdio.h>
/**
 * _strspn - counts number of bytes in s
 * @s: bytes to be cheked
 * @accept: where to start counting
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int is_checked;

	while (*s != '\0')
	{
		is_checked = 0;
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				is_checked = 1;
				break;
			}
			accept_ptr++;
		}
		if (is_checked == 0)
		{
			return (num);
		}
		num++;
		s++;
	}
	return (num);
}
