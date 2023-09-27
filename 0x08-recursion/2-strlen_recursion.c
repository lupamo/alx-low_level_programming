#include <stdio.h>
/**
 * _strlen_recursion - finds length of string
 * @s: string to be found
 * Return: nothing except string lengt
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
