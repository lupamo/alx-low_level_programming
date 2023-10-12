#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all types
 * @format: any type int/char/float/char*
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int j = 0, i, k = 0;
	const char t_arg[] = "cifs";
	char *strings;

	va_start(args, format);
	while (format && format[j])
	{
		i = 0;
		while (t_arg[i])
		{
			if (format[j] == t_arg[i] && k)
			{
				printf(", ");
				break;
			} i++;
		}
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), k = 1;
				break;
			case 's':
				strings = va_arg(args, char *), k = 1;
				if (!strings)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strings);
				break;
		} j++;
	}
	printf("\n"), va_end(args);
}
