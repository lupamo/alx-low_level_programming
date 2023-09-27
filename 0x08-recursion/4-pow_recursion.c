#include <stdio.h>
/**
 * _pow_recursion - prints a power of numbers
 * @x: base number
 * @y: power number
 * Return: zero or nothing
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
