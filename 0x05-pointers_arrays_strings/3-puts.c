#include <stdio.h>
/**
 * _puts - prints string
 * @str: string to be printed
 * return: always 1
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str;
	}
}
