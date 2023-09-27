#include <stdio.h>
/**
 * _sqrt_recursion - sets asqrt of a number
 * @n: number to be sqrted
 * Return: sqrt after run
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int approx = (n / 2);
		int next_approx = (approx + n / approx) / 2;

		if (next_approx == approx)
		{
			return (approx);
		}
		else
		{
			return (_sqrt_recursion(n));
		}
	}
}
