#include <stdio.h>
/**
 * _strstr - finds a subtring
 * @haystack: string tobe searched
 * @needle: substring to be found
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
		char *s = needle;

		while (*s != '\0' && *s == *s)
		{
			p++;
			s++;
		}
		if (*s == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
