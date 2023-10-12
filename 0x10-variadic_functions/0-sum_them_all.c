#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all available arguments
 * @n: first argument
 * Return: summed up value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		i += va_arg(ap, int);
	}
	va_end(ap);
	return (i);
}
