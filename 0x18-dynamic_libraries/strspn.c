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
	char *main_accept = accept;

	while (*s != '\0')
	{
		is_checked = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				is_checked = 1;
				break;
			}
			accept++;
		}
		if (is_checked == 0)
		{
			break;
		}
		num++;
		accept = main_accept;
		s++;
	}
	return (num);
}
