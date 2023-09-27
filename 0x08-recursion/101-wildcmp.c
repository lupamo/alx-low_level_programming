#include <stdio.h>
/**
 * wildcmp - compares two strings are identicle
 * @s1: first string to be compared
 * @s2: second string to be compared to
 * Return: if identicle return 1 else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
