#include <stdio.h>
/**
 * _sqrt_recursion - sets asqrt of a number
 * @n: number to be sqrted
 * @half: number predicted to be sqrt
 * Return: sqrt after run
 */
int _sqrt_recursion(int n, int half)
{
	int full = half * half;

	if (full == n)
	{
		return (half);
	}
	else if (full > n || half > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n, half + 1));
	}
}
