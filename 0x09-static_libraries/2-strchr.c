#include <stdio.h>
/**
 * _strchr - checks for c
 * @s: string to be checked
 * @c: character looked for
 * Return: pointer of c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
