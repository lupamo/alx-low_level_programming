#include <stdio.h>
/**
 * _strlen - returns length of string
 * description - value of string is returned
 * @s: is the string to be checked
 * return: returns sting length
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
