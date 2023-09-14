#include "main.h"

/**
* print_most_numbers - print numbers 0-9, except for 2 and 4
* Return: nothing
*/
void print_most_numbers(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
	{
	if (!(l == '2' || l == '4'))
	_putchar(l);
	}
	_putchar('\n');
}
