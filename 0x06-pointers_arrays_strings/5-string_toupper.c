#include <stdio.h>
/**
 * string_toupper - makes a strin uppercase
 * @s: a string to be uppercased
 * Return: returns 1
 */
char *string_toupper(char *s)
{
	char *stored = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (stored);
}
