#include <stdio.h>
/**
 * _strcmp - to compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: a comparison
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
	{
		return (-1);
	}
	else if (*s1 > *s2)
	{
		return (1);
	}
	return (0);
}
