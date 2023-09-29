#include <stdio.h>
/**
 * _strcat - function to return two strings
 * @dest: first string to be appended
 * @src: second string to be appended
 * Return: dest to be retrned
 */
char *_strcat(char *dest, char *src)
{
	char *real_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (real_dest);
}
