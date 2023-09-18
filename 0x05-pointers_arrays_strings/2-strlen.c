#include <stdio.h>
/**
 * _strlen - returns length of string
 * 
 * @s: is the string to be checked
 * return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
