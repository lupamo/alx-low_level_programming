#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x in lower case
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;

	int y;

	for (y = 0; y <= 10; y++)
	{
		for(i = 'a' ; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
