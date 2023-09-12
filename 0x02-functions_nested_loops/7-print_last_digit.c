#include "main.h"
/**
 * print_last_digit - returns a digit
 * @n: input digit
 * Return - a lst digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit);
}
