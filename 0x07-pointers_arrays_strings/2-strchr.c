#include <stdio.h>
/**
 * _strchr - checks for c
 * @s: string to be checked
 * @c: character looked for
 * Return: pointer of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
