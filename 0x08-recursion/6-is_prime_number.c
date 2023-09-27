#include <stdio.h>
/**
 * is_prime_number - checks if a value is prime
 * @n: value to be checked
 * @divise: used to divide int
 * Return: 0 or 1 depending on solution
 */
int is_prime_number(int n, int divise)
{
	if (n == 1)
	{
		return (0);
	}
	if (n % divise <= 0)
	{
		return (0);
	}
	return (is_prime_number(n, divise + 1));
}
