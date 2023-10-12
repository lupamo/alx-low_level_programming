#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints the number of ints in functions
 * @separator: is the string to be printed between numbers
 * @n: number of int in a function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));
		if (separator && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
