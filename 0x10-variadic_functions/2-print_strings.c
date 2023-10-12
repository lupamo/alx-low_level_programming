#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings
 * @separator: a separator to be printed between strings
 * @n: number of string arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	char *strings;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		strings = va_arg(args, char *);
		if (strings)
		{
			printf("%s", strings);
		}
		else
		{
			printf("(nil)");
		}
		if (j < n - 1)
			if (separator)
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(args);
}
