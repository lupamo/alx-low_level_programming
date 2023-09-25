#include <stdio.h>
/**
 * _strstr - finds a subtring
 * @haystack: string tobe searched
 * @needle: substring to be found
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (int n = 0; haystack[n] != '\0'; n++)
	{
		if (haystack[n] == needle[0])
		{
			int j = 1;

			while (needle[j] != '\0' && haystack[n + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[n]);
			}
		}
	}
	return (NULL);
}
