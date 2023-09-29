#include  <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: first string to be coppied
 * @src: second string to be coppied
 * @n: number of times to be coppied
 * Return: to return a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *destPosition = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (destPosition);
}
