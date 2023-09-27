#include <stdio.h>
/**
 * sqrt_first - first function
 * @n: first integer
 * @half: second int to root
 * Return: sqrt recursed
 */
int sqrt_first(int n, int half)
{

	if (half % (n / half) == 0)
	{
		if (half * (n / half) == n)
		{
			return (half);
		}
		else
		{
			return (-1);
		}
		return (0 + sqrt_first(n, half + 1));
	}
	/**
	 * _sqrt_recursion - sets asqrt of a number
	 * @n: number to be sqrted
	 * @half: number predicted to be sqrt
	 * Return: sqrt after run
	 */
	int _sqrt_recursion(int n)
	{
		if (n < 0)
		{
			return (-1);
		}

		if (n == 0)
		{
			return (0);
		}
		if (n == 1)
		{
			return (1);
		}
		return (sqrt_first(n, 2));
	}

}
