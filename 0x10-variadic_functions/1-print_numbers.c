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
	printf("%d", va_arg(args, int));
	for (j = 1; j < n; j++)
	{
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
