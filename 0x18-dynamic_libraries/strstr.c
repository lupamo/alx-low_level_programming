#include <stdio.h>
/**
 * _strstr - finds a subtring
 * @haystack: string tobe searched
 * @needle: substring to be found
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *s;

	while (*haystack != '\0')
	{
		h = haystack;
		s = needle;

		while (*s != '\0' && *h == *s)
		{
			h++;
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
