#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x in lower case
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i * 10);
	}
	_putchar('\n');
}
