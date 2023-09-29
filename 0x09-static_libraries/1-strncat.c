#include <stdio.h>
/**
 * _strncat - to return concatnated string
 * @dest: firsts string parameter
 * @src: second string parameter
 * @n: number of bytes to be used
 * Return: real_dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *real_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (real_dest);
}
