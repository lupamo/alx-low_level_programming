#include <stdio.h>
/**
 * sqrt_first - first function
 * @n: first integer
 * @num: second int to root
 * Return: sqrt recursed
 */
int sqrt_first(int n, int num)
{
	int product = num * num;

	if (product == n)
	{
		return (num);
	}
	else if (product > n || num > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_first(n, num + 1));
	}
}
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
		return (sqrt_first(n, 1));
	}
}
