#include "main.h"
/**
 * _isupper - checks if a character is upper
 * @c: input character
 * Return: 1 after success and 0 after failing
 */
int _isupper(int c)
{
	if ( c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
