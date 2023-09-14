#include "main.h"
/**
 * print_line - prints a line in terminal
 * @n: number of lines
 * Return: returns 0 after success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
