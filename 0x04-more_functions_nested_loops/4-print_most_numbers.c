#include "main.h"
/**
 * print_most_numbers - skip 4 and two
 *
 * Return: nothing to return
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= 9; c++)
	{
		if(!(l == '2' || l == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
