#include <stdio.h>
/**
 * _sqrt_recursion - sets asqrt of a number
 * @n: number to be sqrted
 * Return: sqrt after run
 */
int _sqrt_recursion(int n)
{
	int guesser = n / 2;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (guesser * guesser > n)
	{
		return (_sqrt_recursion(n - 1));
	}
	else
	{
		return (_sqrt_recursion(n + 1));
	}
}
