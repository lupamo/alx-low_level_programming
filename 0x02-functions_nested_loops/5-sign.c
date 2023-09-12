#include "main.h"
/**
 * print_sign - a random digit
 * @n: an input for number
 * Returns: 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_purchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
