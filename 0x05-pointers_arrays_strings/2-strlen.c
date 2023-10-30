#include <stdio.h>
/**
 * _strlen - returns length of string
 * @s: is the string to be checked
 * Return: string length
 */
int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}
