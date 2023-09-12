#include "main.h"
/**
 *  _islower - prints 1 if char is lower
 *@c: argument to be checked
 *  Return: returns 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
