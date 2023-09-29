#include <stdio.h>

/**
 * _memcpy - copies bytes from src to dest
 * @src: where bytes are coppied from
 * @dest: where bytes are coppied to
 * @n: number of times coppied
 * Return: dest after success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
